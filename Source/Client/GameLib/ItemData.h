	enum EItemType
	{
		[...]
		ITEM_TYPE_TALISMAN,

	};


	enum EWearPositions
	{

		[...]


		WEAR_TALISMAN_FIRE,
		WEAR_TALISMAN_ICE,
		WEAR_TALISMAN_EARTH,
		WEAR_TALISMAN_DARK,
		WEAR_TALISMAN_WIND,
		WEAR_TALISMAN_ELEC,

		WEAR_MAX_NUM,
	};


	enum EItemWearableFlag
	{
		[...]
		WEARABLE_FIRE	= (1 << /* son sayıyı bir artırıp devam edin*/),
		WEARABLE_ICE	= (1 << /* son sayıyı bir artırıp devam edin*/),
		WEARABLE_EARTH	= (1 << /* son sayıyı bir artırıp devam edin*/),
		WEARABLE_DARK	= (1 << /* son sayıyı bir artırıp devam edin*/),
		WEARABLE_WIND	= (1 << /* son sayıyı bir artırıp devam edin*/),
		WEARABLE_ELEC	= (1 << /* son sayıyı bir artırıp devam edin*/),
	};