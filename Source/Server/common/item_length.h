enum EItemTypes
{
	[...]
#ifdef MULTI_TALISMAN
	ITEM_TALISMAN,
#endif
};



enum EItemWearableFlag
{
[...]
	WEARABLE_FIRE	= (1 << 23),
	WEARABLE_ICE	= (1 << 24),
	WEARABLE_EARTH	= (1 << 25),
	WEARABLE_DARK	= (1 << 26),
	WEARABLE_WIND	= (1 << 27),
	WEARABLE_ELEC	= (1 << 28),
};