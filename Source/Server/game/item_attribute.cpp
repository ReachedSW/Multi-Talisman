
int CItem::GetAttributeSetIndex()
{
[...]
#ifdef MULTI_TALISMAN
	if (GetType() == ITEM_TALISMAN)
	{
		return ATTRIBUTE_SET_TALISMAN;
	}
#endif