
/* public: void __thiscall CFontData::ConvertKSC2KSSM(char *,char *) */

void __thiscall CFontData::ConvertKSC2KSSM(CFontData *this,char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  
                    /* 0x1878c0  1365  ?ConvertKSC2KSSM@CFontData@@QAEXPAD0@Z */
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if ((_buseMultiByte == 1) && (*param_1 < '\0')) {
      bVar2 = *param_1 + 0x50;
      bVar4 = param_1[1] + 0x5f;
      param_1 = param_1 + 2;
      if ((bVar2 == 0xf4) && (bVar4 < 0x33)) {
        *param_2 = (&DAT_362a6da8)[(uint)bVar4 * 2];
        param_2[1] = (&DAT_362a6da9)[(uint)bVar4 * 2];
        param_2 = param_2 + 2;
      }
      else {
        iVar3 = ((uint)bVar2 * 0x5e + (uint)bVar4) * 2;
        *param_2 = (&DAT_362a6e10)[iVar3];
        param_2[1] = (&DAT_362a6e11)[iVar3];
        param_2 = param_2 + 2;
      }
    }
    else {
      *param_2 = *param_1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    cVar1 = *param_1;
  }
  return;
}

