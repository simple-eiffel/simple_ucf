# 7S-01 SCOPE - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf
**Purpose**: Universe Configuration File parser and manager for Eiffel ecosystem

## Problem Domain

simple_ucf addresses the challenge of managing and discovering multiple Eiffel libraries within a development ecosystem. In large Eiffel projects, developers work with dozens of interdependent libraries, each with its own configuration, paths, and metadata.

## Scope Boundaries

### In Scope
- Parse UCF files (TOML-based configuration format)
- Auto-discover libraries from SIMPLE_EIFFEL environment root
- Auto-discover libraries from legacy SIMPLE_* environment variables
- Resolve environment variable paths ($VAR syntax)
- Provide unified view of ecosystem libraries
- Generate UCF content from discovered state
- Query libraries by name or tag
- Configure heatmap visualization settings

### Out of Scope
- Library compilation or building
- Dependency resolution between libraries
- Version management
- Remote library fetching
- IDE integration
- Code generation

## Target Users

- Eiffel ecosystem developers managing multiple libraries
- Build tools requiring library discovery
- Analysis tools (heatmap visualization, code metrics)
- CI/CD pipelines needing ecosystem configuration

## Success Criteria

1. Successfully parse valid UCF TOML files
2. Auto-discover all simple_* libraries from SIMPLE_EIFFEL root
3. Expand environment variables in paths correctly
4. Provide consistent API for library enumeration
5. Support heatmap configuration for DbC visualization tools
