# 7S-03 SOLUTIONS - simple_ucf


**Date**: 2026-01-23

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Alternative Approaches Considered

### 1. ECF-Only Approach
**Description**: Use only standard Eiffel .ecf files for configuration
**Pros**: Standard format, IDE support
**Cons**: No ecosystem-wide view, no tagging, no heatmap config
**Decision**: Rejected - ECF is per-library, not per-universe

### 2. JSON Configuration
**Description**: Use JSON for UCF format
**Pros**: Ubiquitous, well-supported
**Cons**: Verbose, no comments, less human-friendly
**Decision**: Rejected in favor of TOML

### 3. TOML Configuration (Selected)
**Description**: Use TOML for human-readable configuration
**Pros**: Clean syntax, comments, arrays of tables
**Cons**: Less common, requires parser
**Decision**: Selected - best balance of readability and structure

### 4. Environment-Only Discovery
**Description**: Rely solely on environment variables
**Pros**: Simple, no config file needed
**Cons**: Limited metadata, no tagging, no heatmap config
**Decision**: Supported as fallback, not primary

## Implementation Strategy

1. Primary: SIMPLE_EIFFEL root directory scanning
2. Fallback: Legacy SIMPLE_* environment variable discovery
3. Optional: Explicit UCF file loading

## Technology Stack

- **simple_toml**: TOML parsing
- **simple_file**: File operations
- **simple_env**: Environment variable enumeration
- **simple_date_time**: Timestamp generation
