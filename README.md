<p align="center">
  <img src="https://raw.githubusercontent.com/simple-eiffel/.github/main/profile/assets/logo.svg" alt="simple_ library logo" width="400">
</p>

# simple_ucf

**[Documentation](https://simple-eiffel.github.io/simple_ucf/)** | **[GitHub](https://github.com/simple-eiffel/simple_ucf)**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Eiffel](https://img.shields.io/badge/Eiffel-25.02-blue.svg)](https://www.eiffel.org/)
[![Design by Contract](https://img.shields.io/badge/DbC-enforced-orange.svg)]()

Universe Configuration File (UCF) - Define and manage Eiffel ecosystem scope.

Part of the [Simple Eiffel](https://github.com/simple-eiffel) ecosystem.

**Developed using AI-assisted methodology:** Built interactively with Claude Opus 4.5 following rigorous Design by Contract principles.

## Installation

Set the ecosystem environment variable (one-time setup for all simple_* libraries):
```
SIMPLE_EIFFEL=D:\prod
```

Add to your ECF:
```xml
<library name="simple_ucf" location="$SIMPLE_EIFFEL/simple_ucf/simple_ucf.ecf"/>
```

## Overview

UCF defines an **ecosystem** - a collection of related Eiffel projects/libraries that should be analyzed together. While ECF (Eiffel Configuration File) defines a single project, UCF spans the entire ecosystem.

Use cases:
- **Cross-library navigation** - Jump from simple_json to simple_sql definitions
- **DbC Heat Mapping** - Visualize contract coverage across 55+ libraries
- **Dependency Analysis** - Find circular dependencies, hub classes
- **Ecosystem Search** - Search symbols across all libraries

## Quick Start

```eiffel
-- Load from file
create ucf.make
ucf.load_file ("D:/prod/simple_universe.ucf")

-- Or auto-discover from SIMPLE_* environment variables
ucf.discover_from_environment

-- Query libraries
if ucf.is_valid then
    across ucf.libraries as lib loop
        print (lib.name + ": " + lib.resolved_path + "%N")
    end
end

-- Find specific library
if attached ucf.library_by_name ("simple_json") as json_lib then
    print (json_lib.full_ecf_path)
end

-- Filter by tag
across ucf.libraries_with_tag ("data") as lib loop
    print (lib.name + " handles data%N")
end
```

## UCF Format (TOML)

```toml
# simple_universe.ucf

[universe]
name = "simple-eiffel"
description = "Simple Eiffel Ecosystem"
root = "D:/prod"

[stdlib]
location = "$ISE_LIBRARY"
include = ["base", "time", "testing"]

[[library]]
name = "simple_json"
location = "$SIMPLE_JSON"
ecf = "simple_json.ecf"
tags = ["data", "serialization"]

[[library]]
name = "simple_sql"
location = "$SIMPLE_SQL"
ecf = "simple_sql.ecf"
tags = ["data", "database"]

[heatmap]
enabled = true
metrics = ["preconditions", "postconditions", "invariants"]
```

## Features

### Auto-Discovery
```eiffel
ucf.discover_from_environment
-- Scans all SIMPLE_* environment variables
-- Creates universe definition automatically
```

### Generate UCF
```eiffel
-- Generate UCF from current state
if attached ucf.generate_ucf as content then
    -- Save to file
end
```

### Heat Map Configuration
```eiffel
-- Access heatmap settings
if ucf.heatmap_config.is_enabled then
    color := ucf.heatmap_config.color_for_percentage (75)
    -- Returns "#00FF00" (green) for high coverage
end
```

## Integration

### simple_lsp
UCF enables cross-library navigation and DbC heat mapping in the LSP server.

### simple_oracle
UCF provides ecosystem scope for knowledge queries and pattern analysis.

## Dependencies

- [simple_toml](https://github.com/simple-eiffel/simple_toml) - TOML parsing
- [simple_xml](https://github.com/simple-eiffel/simple_xml) - ECF parsing
- [simple_file](https://github.com/simple-eiffel/simple_file) - File operations

## API Reference

### SIMPLE_UCF
Main class for loading and querying universe configuration.

| Feature | Description |
|---------|-------------|
| `load_file (path)` | Load UCF from file |
| `load_string (toml)` | Load UCF from string |
| `discover_from_environment` | Auto-discover from SIMPLE_* vars |
| `library_by_name (name)` | Find library by name |
| `libraries_with_tag (tag)` | Filter libraries by tag |
| `generate_ucf` | Generate UCF content |

### UCF_LIBRARY
Represents a library in the universe.

| Feature | Description |
|---------|-------------|
| `name` | Library name |
| `location` | Original path (with $ENV_VAR) |
| `resolved_path` | Expanded absolute path |
| `ecf` | ECF filename |
| `tags` | Classification tags |
| `full_ecf_path` | Complete path to ECF |
| `has_tag (tag)` | Check for tag |

### UCF_HEATMAP_CONFIG
Heat map visualization settings.

| Feature | Description |
|---------|-------------|
| `is_enabled` | Heat map enabled? |
| `metrics` | Metrics to visualize |
| `color_for_percentage (pct)` | Get color for coverage % |

## License

MIT License - See [LICENSE](LICENSE) file.

## Resources

- [Simple Eiffel Organization](https://github.com/simple-eiffel)
- [UCF Design Document](https://github.com/simple-eiffel/claude_eiffel_op_docs/blob/main/designs/ucf_design.md)
