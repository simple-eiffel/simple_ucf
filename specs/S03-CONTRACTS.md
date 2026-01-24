# S03 CONTRACTS - simple_ucf

**BACKWASH** - Generated: 2026-01-23
**Library**: simple_ucf

## SIMPLE_UCF Contracts

### load_file
```eiffel
load_file (a_path: STRING_32)
    require
        path_not_void: a_path /= Void
        path_not_empty: not a_path.is_empty
    -- Post: is_valid set based on parse success
    -- Post: last_errors populated on failure
```

### load_string
```eiffel
load_string (a_ucf: STRING_32)
    require
        ucf_not_void: a_ucf /= Void
    -- Post: is_valid set based on parse success
```

### library_by_name
```eiffel
library_by_name (a_name: STRING_32): detachable UCF_LIBRARY
    require
        name_not_void: a_name /= Void
    -- Returns: Library if found, Void otherwise
```

### libraries_with_tag
```eiffel
libraries_with_tag (a_tag: STRING_32): ARRAYED_LIST [UCF_LIBRARY]
    require
        tag_not_void: a_tag /= Void
    ensure
        result_attached: Result /= Void
```

### generate_ucf
```eiffel
generate_ucf: STRING_32
    ensure
        result_attached: Result /= Void
```

## UCF_LIBRARY Contracts

### set_name
```eiffel
set_name (a_name: STRING_32)
    require
        name_not_void: a_name /= Void
    ensure
        name_set: name = a_name
```

### full_ecf_path
```eiffel
full_ecf_path: STRING_32
    ensure
        result_attached: Result /= Void
    -- Returns: resolved_path + "/" + ecf, or empty if either is empty
```

### has_tag
```eiffel
has_tag (a_tag: STRING_32): BOOLEAN
    require
        tag_not_void: a_tag /= Void
    -- Returns: True if tag in tags collection
```

## UCF_HEATMAP_CONFIG Contracts

### color_for_percentage
```eiffel
color_for_percentage (a_pct: INTEGER): STRING_32
    -- Returns: Appropriate color based on threshold levels
```

## Class Invariants

### SIMPLE_UCF
- None explicitly defined

### UCF_LIBRARY
- None explicitly defined

### UCF_HEATMAP_CONFIG
- None explicitly defined
