# S01 PROJECT INVENTORY - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## Project Structure

```
simple_ucf/
  simple_ucf.ecf          # Eiffel configuration file
  src/
    simple_ucf.e          # Main facade class
    ucf_library.e         # Library definition
    ucf_heatmap_config.e  # Heatmap configuration
  testing/
    test_app.e            # Test application entry
    lib_tests.e           # Test cases
  research/               # 7S research documents
  specs/                  # Specification documents
```

## Source Files

| File | Type | Lines | Description |
|------|------|-------|-------------|
| simple_ucf.e | Class | ~550 | Universe Configuration File manager |
| ucf_library.e | Class | ~120 | Library definition data class |
| ucf_heatmap_config.e | Class | ~155 | Heatmap visualization config |

## Test Files

| File | Type | Tests | Description |
|------|------|-------|-------------|
| test_app.e | Root | - | Test application entry point |
| lib_tests.e | Tests | TBD | Library test cases |

## Dependencies

### Internal (simple_* ecosystem)
- simple_toml (TOML parsing)
- simple_file (File I/O)
- simple_env (Environment enumeration)
- simple_date_time (Timestamps)

### External (EiffelStudio)
- base (DIRECTORY, RAW_FILE, ARRAYED_LIST)
- time (DATE_TIME)

## Build Targets

| Target | Type | Description |
|--------|------|-------------|
| simple_ucf | Library | Main library target |
| simple_ucf_tests | Executable | Test runner |
