# 7S-02 STANDARDS - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Applicable Standards

### Configuration Format
- **TOML 1.0**: UCF files use TOML format for configuration
- Uses simple_toml library for parsing

### Eiffel Standards
- **ECMA-367**: Eiffel language standard compliance
- **ECF Format**: References standard Eiffel Configuration Files
- **Void Safety**: Full void-safe implementation

### Simple Ecosystem Standards
- **simple_* naming**: Library naming convention
- **Environment variables**: SIMPLE_* prefix convention
- **DBC patterns**: Design by Contract throughout

## File Format Specification

### UCF Structure
```toml
[universe]
name = "universe-name"
description = "optional description"
root = "D:/path/to/root"

[stdlib]
location = "$ISE_LIBRARY"
include = ["base", "time"]

[[library]]
name = "library_name"
location = "$ENV_VAR"
ecf = "library_name.ecf"
tags = ["category1", "category2"]

[heatmap]
enabled = true
metrics = ["preconditions", "postconditions"]
```

## Compliance Requirements

1. Parse valid TOML 1.0 syntax
2. Handle UTF-8 encoded files (STRING_32 support)
3. Normalize path separators (backslash to forward slash)
4. Support both Windows and Unix path conventions
