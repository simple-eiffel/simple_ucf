# S06 BOUNDARIES - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## System Boundaries

```
+--------------------------------------------------+
|                    Client Code                    |
+--------------------------------------------------+
                        |
                        v
+--------------------------------------------------+
|                   SIMPLE_UCF                      |
|  +------------+  +-------------+  +------------+ |
|  | load_file  |  | discover_*  |  | query      | |
|  +------------+  +-------------+  +------------+ |
+--------------------------------------------------+
         |                 |              |
         v                 v              v
+----------------+ +---------------+ +----------+
| simple_toml    | | simple_env    | | Internal |
| (TOML parsing) | | (Env vars)    | | State    |
+----------------+ +---------------+ +----------+
         |                 |
         v                 v
+----------------+ +---------------+
| File System    | | OS Environment|
+----------------+ +---------------+
```

## Interface Boundaries

### Public Interface (SIMPLE_UCF)
- `make`: Constructor
- `load_file`, `load_string`: Loading
- `discover_from_*`: Discovery
- `library_by_name`, `libraries_with_tag`: Queries
- `generate_ucf`: Export

### Internal Interface
- `parse_ucf`: TOML parsing
- `resolve_path`: Environment expansion
- `reset`: State cleanup

### External Dependencies
- simple_toml: TOML_TABLE, TOML_ARRAY, TOML_STRING
- simple_file: SIMPLE_FILE
- simple_env: SIMPLE_ENV
- simple_date_time: SIMPLE_DATE_TIME

## Data Boundaries

### Input Data
| Data | Source | Validation |
|------|--------|------------|
| UCF content | File/String | TOML parser |
| File paths | Configuration | Existence check |
| Env vars | OS | Optional (graceful missing) |

### Output Data
| Data | Destination | Format |
|------|-------------|--------|
| Libraries | Client | UCF_LIBRARY objects |
| Generated UCF | Client | STRING_32 (TOML) |
| Errors | Client | ARRAYED_LIST [STRING_32] |

## Trust Boundaries

| Zone | Trust Level | Validation |
|------|-------------|------------|
| Client code | Trusted | Preconditions |
| UCF files | Semi-trusted | TOML parsing |
| Environment | Trusted | None |
| File system | Trusted | Existence check |
