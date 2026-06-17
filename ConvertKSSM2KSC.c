
/* public: void __thiscall CFontData::ConvertKSSM2KSC(char *,char *) */

void __thiscall CFontData::ConvertKSSM2KSC(CFontData *this,char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x187940  1366  ?ConvertKSSM2KSC@CFontData@@QAEXPAD0@Z */
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((_buseMultiByte == 1) && (cVar2 = *param_1, cVar2 < '\0')) {
      pcVar1 = param_1 + 1;
      iVar4 = 0;
      param_1 = param_1 + 2;
      iVar3 = 0;
      do {
        if ((cVar2 == (&DAT_362a6e10)[iVar3]) && (*pcVar1 == (&DAT_362a6e11)[iVar3])) {
          iVar4 = iVar3 / 2;
          if (iVar4 != 0) goto LAB_361879fa;
          break;
        }
        iVar3 = iVar3 + 2;
      } while (iVar3 < 0x125c);
      if (iVar3 < 1) {
LAB_361879fa:
        *param_2 = (char)(iVar4 / 0x5e) + -0x50;
        param_2[1] = (char)(iVar4 % 0x5e) + -0x5f;
        param_2 = param_2 + 2;
      }
      else {
        iVar3 = 0;
        do {
          if ((cVar2 == (&DAT_362a6da8)[iVar3]) && (*pcVar1 == (&DAT_362a6da9)[iVar3])) {
            iVar4 = iVar3 / 2;
            break;
          }
          iVar3 = iVar3 + 2;
        } while (iVar3 < 0x66);
        *param_2 = (char)(iVar4 / 0x5e) + -0x5c;
        param_2[1] = (char)(iVar4 % 0x5e) + -0x5f;
        param_2 = param_2 + 2;
      }
    }
    else {
      *param_2 = *param_1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}

