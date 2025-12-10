note
	description: "UCF Heatmap configuration for DbC visualization"
	date: "$Date$"
	revision: "$Revision$"

class
	UCF_HEATMAP_CONFIG

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize heatmap config
		do
			create metrics.make (5)
			create colors.make (4)
			create thresholds.make (3)
			set_defaults
		end

feature -- Access

	is_enabled: BOOLEAN assign set_enabled
			-- Is heatmap feature enabled?

	metrics: ARRAYED_LIST [STRING_32]
			-- Metrics to include in heatmap
			-- Default: preconditions, postconditions, invariants, check_assertions

	colors: HASH_TABLE [STRING_32, STRING_32]
			-- Color mapping: level -> color hex
			-- Default: none=#FF0000, low=#FFA500, medium=#FFFF00, high=#00FF00

	thresholds: HASH_TABLE [INTEGER, STRING_32]
			-- Threshold values: level -> percentage
			-- Default: low=25, medium=50, high=75

feature -- Status

	low_threshold: INTEGER
			-- Percentage threshold for "low" coverage
		do
			if attached thresholds.item ("low") as l_val then
				Result := l_val
			else
				Result := 25
			end
		end

	medium_threshold: INTEGER
			-- Percentage threshold for "medium" coverage
		do
			if attached thresholds.item ("medium") as l_val then
				Result := l_val
			else
				Result := 50
			end
		end

	high_threshold: INTEGER
			-- Percentage threshold for "high" coverage
		do
			if attached thresholds.item ("high") as l_val then
				Result := l_val
			else
				Result := 75
			end
		end

	color_for_percentage (a_pct: INTEGER): STRING_32
			-- Get color for given coverage percentage
		do
			if a_pct = 0 then
				Result := color_none
			elseif a_pct < low_threshold then
				Result := color_low
			elseif a_pct < medium_threshold then
				Result := color_medium
			elseif a_pct < high_threshold then
				Result := color_high
			else
				Result := color_high
			end
		end

	color_none: STRING_32
		do
			if attached colors.item ("none") as c then Result := c else Result := "#FF0000" end
		end

	color_low: STRING_32
		do
			if attached colors.item ("low") as c then Result := c else Result := "#FFA500" end
		end

	color_medium: STRING_32
		do
			if attached colors.item ("medium") as c then Result := c else Result := "#FFFF00" end
		end

	color_high: STRING_32
		do
			if attached colors.item ("high") as c then Result := c else Result := "#00FF00" end
		end

feature -- Modification

	set_enabled (a_enabled: BOOLEAN)
			-- Set `is_enabled'
		do
			is_enabled := a_enabled
		ensure
			is_enabled_set: is_enabled = a_enabled
		end

	reset
			-- Reset to defaults
		do
			metrics.wipe_out
			colors.wipe_out
			thresholds.wipe_out
			set_defaults
		end

feature {NONE} -- Implementation

	set_defaults
			-- Set default values
		do
			is_enabled := True

			-- Default metrics
			metrics.extend ("preconditions")
			metrics.extend ("postconditions")
			metrics.extend ("invariants")
			metrics.extend ("check_assertions")

			-- Default colors
			colors.force ("#FF0000", "none")    -- Red
			colors.force ("#FFA500", "low")     -- Orange
			colors.force ("#FFFF00", "medium")  -- Yellow
			colors.force ("#00FF00", "high")    -- Green

			-- Default thresholds
			thresholds.force (25, "low")
			thresholds.force (50, "medium")
			thresholds.force (75, "high")
		end

end
