
/* enum EShopItemClass __cdecl ItemTypeToShopItemClass(enum EItemType const &) */

EShopItemClass __cdecl ItemTypeToShopItemClass(EItemType *param_1)

{
                    /* 0x19a1d0  2512
                       ?ItemTypeToShopItemClass@@YA?AW4EShopItemClass@@ABW4EItemType@@@Z */
  switch(*param_1) {
  default:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 7;
  case 8:
    return 8;
  case 9:
    return 9;
  case 10:
    return 10;
  case 0xc:
    return 0xb;
  case 0xd:
    return 0xc;
  case 0xe:
    return 0xd;
  }
}

