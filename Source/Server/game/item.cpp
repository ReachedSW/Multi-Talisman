// ara

int CItem::FindEquipCell(LPCHARACTER ch, int iCandidateCell)
{
	[...]

	else if (GetType() == ITEM_TALISMAN)
	{
		if (GetWearFlag() & WEARABLE_FIRE)
			return WEAR_TALISMAN_FIRE;
		else if (GetWearFlag() & WEARABLE_ICE)
			return WEAR_TALISMAN_ICE;
		else if (GetWearFlag() & WEARABLE_EARTH)
			return WEAR_TALISMAN_EARTH;
		else if (GetWearFlag() & WEARABLE_DARK)
			return WEAR_TALISMAN_DARK;
		else if (GetWearFlag() & WEARABLE_WIND)
			return WEAR_TALISMAN_WIND;
		else if (GetWearFlag() & WEARABLE_ELEC)
			return WEAR_TALISMAN_ELEC;
	}

	return -1;
}

// ara

bool CItem::IsEquipable() const
{
	[...]
	case ITEM_ARMOR:
#ifdef MULTI_TALISMAN
	case ITEM_TALISMAN:
#endif
}


// ara

bool CItem::CanPutInto(LPITEM item)
{
	[...]
#ifdef MULTI_TALISMAN
	else if (item->GetType() != ITEM_TALISMAN)
		return false;
#endif
}