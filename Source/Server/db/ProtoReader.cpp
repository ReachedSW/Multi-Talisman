	string arType[] =
	{
		[...]
#ifdef MULTI_TALISMAN
		"ITEM_TALISMAN"
#endif
	};



	string arWearrFlag[] =
	{
		[...]
#ifdef MULTI_TALISMAN
		"WEAR_TALISMAN_FIRE",
		"WEAR_TALISMAN_ICE",
		"WEAR_TALISMAN_EARTH",
		"WEAR_TALISMAN_DARK",
		"WEAR_TALISMAN_WIND",
		"WEAR_TALISMAN_ELEC",
#endif
	};


// Sonuna 6 tane 0, ekleyin


	static string* arSubType[] =
	{
		[..]
#ifdef MULTI_TALISMAN
		0,
		0,
		0,
		0,
		0,
		0,
#endif



// Sonuna 6 tane 0, ekleyin

	static int arNumberOfSubtype[_countof(arSubType)] =
	{
		[...]
#ifdef MULTI_TALISMAN
		0,
		0,
		0,
		0,
		0,
		0,
#endif
	};