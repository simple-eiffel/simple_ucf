# 7S-06 SIZING - simple_ucf


**Date**: 2026-01-23

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Codebase Metrics

### Source Files
| File | Lines | Purpose |
|------|-------|---------|
| simple_ucf.e | ~550 | Main UCF manager class |
| ucf_library.e | ~120 | Library definition class |
| ucf_heatmap_config.e | ~155 | Heatmap configuration |
| **Total** | ~825 | |

### Class Count
- 3 production classes
- 2 test classes (test_app.e, lib_tests.e)

## Complexity Analysis

### SIMPLE_UCF (Main Class)
- Features: ~25
- Cyclomatic complexity: Moderate (parsing logic)
- Key complexity: TOML parsing, path resolution

### UCF_LIBRARY
- Features: ~12
- Cyclomatic complexity: Low
- Simple data holder with computed properties

### UCF_HEATMAP_CONFIG
- Features: ~15
- Cyclomatic complexity: Low
- Configuration with defaults

## Memory Footprint

| Component | Typical Size |
|-----------|-------------|
| SIMPLE_UCF instance | ~200 bytes |
| Per library | ~300 bytes |
| Heatmap config | ~150 bytes |
| 50 libraries | ~15 KB total |

## Performance Characteristics

| Operation | Expected Time |
|-----------|--------------|
| Load UCF file | 10-50ms |
| Environment discovery | 50-200ms |
| Library query | O(n) linear |
