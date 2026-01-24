# 7S-04 SIMPLE-STAR - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Ecosystem Dependencies

### Required Libraries
| Library | Purpose | Usage |
|---------|---------|-------|
| simple_toml | TOML parsing | Parse UCF configuration files |
| simple_file | File I/O | Load UCF files from disk |
| simple_env | Environment | Enumerate SIMPLE_* variables |
| simple_date_time | Timestamps | Generate file timestamps |

### Standard Library
| Component | Purpose |
|-----------|---------|
| DIRECTORY | Scan filesystem for libraries |
| RAW_FILE | Check file existence |
| EXECUTION_ENVIRONMENT | Get environment variables |
| ARRAYED_LIST | Store library collections |
| HASH_TABLE | Store heatmap config |

## Integration Points

### Environment Discovery
```eiffel
discover_from_environment
    -- First tries SIMPLE_EIFFEL root
    -- Falls back to legacy SIMPLE_* variables
```

### Library Query
```eiffel
library_by_name (a_name: STRING_32): detachable UCF_LIBRARY
libraries_with_tag (a_tag: STRING_32): ARRAYED_LIST [UCF_LIBRARY]
```

## Ecosystem Position

simple_ucf serves as the ecosystem metadata layer, enabling:
- simple_heatmap: DbC coverage visualization
- Build tools: Library discovery
- Analysis tools: Cross-library metrics
