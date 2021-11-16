				## Talisman Equipment Slot
				{
					"name" : "Talisman_Base",
					"type" : "expanded_image",
					"x" : 10,
					"y" : 33,
					"image" : "d:/ymir work/ui/inventory_buttons/eq_pendant_page.jpg",
					"children" :
					(
						{
							"name" : "TalismanSlot",
							"type" : "slot",
							"x" : 3,
							"y" : 3,
							"width" : 150,
							"height" : 182,
							"slot" : (
										{"index":item.EQUIPMENT_FIRE, "x":61, "y":77-24-20-40, "width":32, "height":32},
										{"index":item.EQUIPMENT_ICE, "x":61, "y":40+12, "width":32, "height":32},
										{"index":item.EQUIPMENT_EARTH, "x":61-11, "y":125, "width":32, "height":32},
										{"index":item.EQUIPMENT_DARK, "x":10, "y":62, "width":32, "height":32},
										{"index":item.EQUIPMENT_WIND, "x":110, "y":61, "width":32, "height":32},
										{"index":item.EQUIPMENT_ELEC, "x":61, "y":77, "width":32, "height":32},
									),
						},
					),
				},
