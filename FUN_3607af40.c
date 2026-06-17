
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3607af40(void)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_362a4010 == 0) {
    local_10 = DAT_362c4588;
    local_c = DAT_362c458c;
    local_8 = DAT_362c4590;
    local_4 = DAT_362c4594;
  }
  else {
    local_10 = DAT_362c4590 * _DAT_362c45a0 +
               DAT_362c458c * DAT_362c459c + DAT_362c4588 * DAT_362c4598;
    local_c = _DAT_362c45b0 * DAT_362c4590 +
              _DAT_362c45ac * DAT_362c458c + _DAT_362c45a8 * DAT_362c4588;
    local_8 = _DAT_362c45c0 * DAT_362c4590 +
              _DAT_362c45bc * DAT_362c458c + _DAT_362c45b8 * DAT_362c4588;
    local_4 = _DAT_362c45d0 * DAT_362c4590 +
              _DAT_362c45cc * DAT_362c458c + _DAT_362c45c8 * DAT_362c4588 + DAT_362c4594;
  }
  if ((((DAT_362c45d8 != local_10) || (DAT_362c45dc != local_c)) || (DAT_362c45e0 != local_8)) ||
     (DAT_362c45e4 != local_4)) {
    if ((*(uint *)(_pGfx + 0xa54) & 0x1000) != 0) {
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0xc0))(*(int **)(_pGfx + 0xa5c),0,&local_10);
    }
    DAT_362c45d8 = local_10;
    DAT_362c45dc = local_c;
    DAT_362c45e0 = local_8;
    DAT_362c45e4 = local_4;
  }
  return;
}

