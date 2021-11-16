bool CClientManager::InitializeItemAttrTable()
{
	snprintf(query, sizeof(query),
		"SELECT apply, apply+0, prob, lv1, lv2, lv3, lv4, lv5, weapon, body, wrist, foots, neck, head, shield, ear "
		", costume_body, costume_hair"
		", costume_weapon"
#ifdef ENABLE_MOUNT_COSTUME_SYSTEM_W_ITEM
		", costume_mount"
#endif
#ifdef MULTI_EFFECT_SYSTEM
		", effect_hand_r"
		", effect_hand_l"
		", effect_body"
#endif
#ifdef SASH_COSTUME_ATTRIBUTE
		", sash"
#endif
#ifdef PET_COSTUME_ATTRIBUTE
		", pet_costume"
#endif
#ifdef MULTI_TALISMAN // buraya eklersiniz benimkini verdim direk
		", talisman"
#endif
		" FROM item_attr%s ORDER BY apply",
		GetTablePostfix());



	while ((data = mysql_fetch_row(pRes->pSQLResult)))
	{
		TItemAttrTable t{};

		int col = 0;

		strlcpy(t.szApply, data[col++], sizeof(t.szApply));
		str_to_number(t.dwApplyIndex, data[col++]);
		str_to_number(t.dwProb, data[col++]);
		str_to_number(t.lValues[0], data[col++]);
		str_to_number(t.lValues[1], data[col++]);
		str_to_number(t.lValues[2], data[col++]);
		str_to_number(t.lValues[3], data[col++]);
		str_to_number(t.lValues[4], data[col++]);
		[...]
#ifdef MULTI_TALISMAN
		str_to_number(t.bMaxLevelBySet[ATTRIBUTE_SET_TALISMAN], data[col++]);
#endif
		sys_log(0, "ITEM_ATTR: %-20s %4lu { %3d %3d %3d %3d %3d } { %d %d %d %d %d %d %d"
			[...]
#ifdef MULTI_TALISMAN
			" %d"
#endif
			" }",
			t.szApply,
			t.dwProb,
			t.lValues[0],
			t.lValues[1],
			t.lValues[2],
			t.lValues[3],
			t.lValues[4],
			[...]

#ifdef MULTI_TALISMAN
			, t.bMaxLevelBySet[ATTRIBUTE_SET_TALISMAN]
#endif
		);