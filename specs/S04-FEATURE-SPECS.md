# S04 FEATURE SPECS - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## SIMPLE_UCF Features

### Initialization

| Feature | Signature | Description |
|---------|-----------|-------------|
| make | make | Create UCF manager with empty state |

### Access

| Feature | Signature | Description |
|---------|-----------|-------------|
| universe_name | STRING_32 | Name of the universe |
| universe_description | STRING_32 | Description |
| universe_root | STRING_32 | Root directory path |
| libraries | ARRAYED_LIST [UCF_LIBRARY] | All libraries |
| stdlib_location | STRING_32 | Standard library location |
| heatmap_config | UCF_HEATMAP_CONFIG | Heatmap configuration |

### Status

| Feature | Signature | Description |
|---------|-----------|-------------|
| is_valid | BOOLEAN | Was last load successful? |
| last_errors | ARRAYED_LIST [STRING_32] | Errors from last operation |

### Loading

| Feature | Signature | Description |
|---------|-----------|-------------|
| load_file | (STRING_32) | Load UCF from file |
| load_string | (STRING_32) | Load UCF from string |
| discover_from_environment | | Auto-discover libraries |
| discover_from_simple_eiffel_root | | Discover from SIMPLE_EIFFEL |
| discover_from_legacy_env_vars | | Discover from SIMPLE_* vars |

### Query

| Feature | Signature | Description |
|---------|-----------|-------------|
| library_by_name | (STRING_32): UCF_LIBRARY | Find library by name |
| libraries_with_tag | (STRING_32): LIST | Libraries with tag |
| all_source_paths | ARRAYED_LIST [STRING_32] | All library paths |

### Generation

| Feature | Signature | Description |
|---------|-----------|-------------|
| generate_ucf | STRING_32 | Generate UCF content |

## UCF_LIBRARY Features

### Access

| Feature | Signature | Description |
|---------|-----------|-------------|
| name | STRING_32 | Library name |
| location | STRING_32 | Location with env vars |
| resolved_path | STRING_32 | Resolved absolute path |
| ecf | STRING_32 | ECF filename |
| tags | ARRAYED_LIST [STRING_32] | Classification tags |

### Computed

| Feature | Signature | Description |
|---------|-----------|-------------|
| full_ecf_path | STRING_32 | Complete ECF path |

### Status

| Feature | Signature | Description |
|---------|-----------|-------------|
| has_tag | (STRING_32): BOOLEAN | Has given tag? |
| is_stdlib | BOOLEAN | Is standard library? |
| is_simple_library | BOOLEAN | Is simple_* library? |

## UCF_HEATMAP_CONFIG Features

### Access

| Feature | Signature | Description |
|---------|-----------|-------------|
| is_enabled | BOOLEAN | Is heatmap enabled? |
| metrics | ARRAYED_LIST [STRING_32] | Metrics to include |
| colors | HASH_TABLE [STRING_32, STRING_32] | Color mapping |
| thresholds | HASH_TABLE [INTEGER, STRING_32] | Threshold values |

### Status

| Feature | Signature | Description |
|---------|-----------|-------------|
| low_threshold | INTEGER | Low coverage % |
| medium_threshold | INTEGER | Medium coverage % |
| high_threshold | INTEGER | High coverage % |
| color_for_percentage | (INTEGER): STRING_32 | Color for % |
