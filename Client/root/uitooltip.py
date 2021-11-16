#ara

if item.ITEM_TYPE_WEAPON == itemType:

# üstüne ekle

		elif item.ITEM_TYPE_TALISMAN == itemType:
			self.__AppendLimitInformation()
			
			self.__AppendAffectInformation()
			self.__AppendAttributeInformation(attrSlot)
			
			self.AppendWearableInformation()