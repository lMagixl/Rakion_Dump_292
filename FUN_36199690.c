
void __cdecl FUN_36199690(char *param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  
  pcVar8 = param_1;
  bVar1 = *param_1;
  cVar2 = '\0';
  cVar3 = '\0';
  cVar4 = '\0';
  cVar5 = '\0';
  cVar6 = '\0';
  cVar7 = '\0';
  param_1 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    cVar2 = pcVar8[1];
    cVar3 = pcVar8[2];
    cVar4 = pcVar8[3];
    cVar5 = pcVar8[4];
    cVar6 = pcVar8[5];
    cVar7 = pcVar8[6];
  }
  (**(code **)(*DAT_3637fb00 + 0x2c0))(param_1,cVar2,cVar3,cVar4,cVar5,cVar6,cVar7);
  return;
}

