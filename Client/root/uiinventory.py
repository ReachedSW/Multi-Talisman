# ara

	def RefreshEquipSlotWindow(self):

##fonksiyon içindeki self.wndEquip.RefreshSlot() üstüne ekle

		self.wndTalisman.SetItemSlot(item.EQUIPMENT_FIRE, getItemVNum(item.EQUIPMENT_FIRE), 0)
		self.wndTalisman.SetItemSlot(item.EQUIPMENT_ICE, getItemVNum(item.EQUIPMENT_ICE), 0)
		self.wndTalisman.SetItemSlot(item.EQUIPMENT_EARTH, getItemVNum(item.EQUIPMENT_EARTH), 0)
		self.wndTalisman.SetItemSlot(item.EQUIPMENT_DARK, getItemVNum(item.EQUIPMENT_DARK), 0)
		self.wndTalisman.SetItemSlot(item.EQUIPMENT_WIND, getItemVNum(item.EQUIPMENT_WIND), 0)
		self.wndTalisman.SetItemSlot(item.EQUIPMENT_ELEC, getItemVNum(item.EQUIPMENT_ELEC), 0)

