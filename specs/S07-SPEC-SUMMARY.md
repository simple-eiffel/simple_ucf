# S07 SPEC SUMMARY - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Executive Summary

simple_ucf is a Universe Configuration File parser and manager for the Eiffel simple_* ecosystem. It provides library discovery, path resolution, and ecosystem metadata management.

## Key Specifications

### Classes
| Class | Purpose | Complexity |
|-------|---------|------------|
| SIMPLE_UCF | Main facade | Medium |
| UCF_LIBRARY | Library data | Low |
| UCF_HEATMAP_CONFIG | Heatmap config | Low |

### Features by Category
| Category | Count | Key Features |
|----------|-------|--------------|
| Loading | 5 | load_file, discover_* |
| Querying | 3 | library_by_name, libraries_with_tag |
| Generation | 1 | generate_ucf |
| Configuration | 10+ | Various accessors |

### Contract Coverage
| Contract Type | Count |
|--------------|-------|
| Preconditions | 15 |
| Postconditions | 10 |
| Invariants | 0 |

## Dependencies

### Required
- simple_toml (TOML parsing)
- simple_file (File I/O)
- simple_env (Environment)
- simple_date_time (Timestamps)

### Optional
- None

## Quality Metrics

| Metric | Value |
|--------|-------|
| Source lines | ~825 |
| Classes | 3 |
| Features | ~50 |
| Test coverage | Present |

## API Summary

```eiffel
-- Primary usage pattern
create ucf.make
ucf.discover_from_environment
if ucf.is_valid then
    across ucf.libraries as lib loop
        print (lib.name + ": " + lib.resolved_path)
    end
end

-- Alternative: load from file
ucf.load_file ("universe.ucf")
```

## Status

**Phase**: 3 (Performance Optimization)
**Stability**: Stable
**Production Ready**: Yes
