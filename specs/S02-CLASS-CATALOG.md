# S02 CLASS CATALOG - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Class Hierarchy

```
SIMPLE_UCF
  - Main facade for UCF operations
  - No inheritance

UCF_LIBRARY
  - Library definition data class
  - No inheritance

UCF_HEATMAP_CONFIG
  - Heatmap visualization configuration
  - No inheritance
```

## Class Descriptions

### SIMPLE_UCF

**Purpose**: Main facade for Universe Configuration File parsing and management

**Responsibilities**:
- Parse UCF files from disk or string
- Auto-discover libraries from SIMPLE_EIFFEL root
- Auto-discover libraries from legacy environment variables
- Resolve environment variable paths
- Query libraries by name or tag
- Generate UCF content

**Key Features**:
- `load_file`: Load UCF from file path
- `load_string`: Load UCF from string content
- `discover_from_environment`: Auto-discover libraries
- `library_by_name`: Query single library
- `libraries_with_tag`: Query libraries by tag
- `generate_ucf`: Export current state to UCF format

### UCF_LIBRARY

**Purpose**: Represents a single library in the universe

**Responsibilities**:
- Store library metadata (name, location, ecf, tags)
- Compute resolved paths
- Determine library type (stdlib vs simple_*)

**Key Attributes**:
- `name`: Library name (e.g., "simple_json")
- `location`: Original location with env vars (e.g., "$SIMPLE_JSON")
- `resolved_path`: Absolute path after resolution
- `ecf`: ECF filename
- `tags`: Classification tags

### UCF_HEATMAP_CONFIG

**Purpose**: Configuration for DbC heatmap visualization

**Responsibilities**:
- Store metric selection (which contracts to measure)
- Define color thresholds for visualization
- Provide default configuration

**Key Attributes**:
- `is_enabled`: Feature toggle
- `metrics`: List of metrics to track
- `colors`: Color mapping for coverage levels
- `thresholds`: Percentage thresholds for levels
