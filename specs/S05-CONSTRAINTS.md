# S05 CONSTRAINTS - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Technical Constraints

### Platform
- **Target OS**: Windows primary, Unix/Linux compatible
- **Compiler**: EiffelStudio 25.02+
- **Void Safety**: Required (full void-safe mode)

### Dependencies
- Must use simple_toml for TOML parsing (no external TOML libraries)
- simple_file for file operations
- simple_env for environment enumeration

### File Format
- UCF files must be valid TOML 1.0
- UTF-8 encoding supported (STRING_32)
- Maximum recommended file size: 1MB

## Business Constraints

### Naming
- Libraries must use simple_* prefix for auto-discovery
- Environment variables must use SIMPLE_* prefix

### Compatibility
- Must support legacy SIMPLE_* environment variable discovery
- Must support new SIMPLE_EIFFEL root discovery
- Must handle missing environment variables gracefully

### Configuration
- Default heatmap thresholds: 25%, 50%, 75%
- Default colors: Red, Orange, Yellow, Green
- Default metrics: preconditions, postconditions, invariants, check_assertions

## Performance Constraints

| Operation | Maximum Time |
|-----------|-------------|
| Load UCF file | 500ms |
| Environment discovery | 2000ms |
| Library query | 100ms |

## Memory Constraints

| Limit | Value |
|-------|-------|
| Maximum libraries | 1000 |
| Maximum file size | 1MB |
| String lengths | 32KB |

## Validation Constraints

### Path Resolution
- Only $VAR syntax supported (not ${VAR})
- Backslashes converted to forward slashes
- Empty paths preserved as empty

### TOML Parsing
- Errors reported in last_errors list
- Partial parsing not supported (all or nothing)
