
void __cdecl FUN_360f3330(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  CTString *this;
  undefined4 *puVar5;
  CWorld local_1a0 [372];
  char *local_2c;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_362165c7;
  local_10 = ExceptionList;
  pcVar4 = (char *)*param_1;
  local_14 = &stack0xfffffe54;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_10;
  puVar3 = &stack0xfffffe54;
  if (0 < (int)pcVar4 - (int)pcVar1) {
    ExceptionList = &local_10;
    CWorld::CWorld(local_1a0);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    local_1c = StringDuplicate(&DAT_36232ea0);
    local_8._0_1_ = 2;
    local_18 = StringDuplicate(s_Levels__36232e98);
    local_8._0_1_ = 3;
    this = (CTString *)CTString::operator+((CTString *)&local_18,(CTString *)&local_20);
    local_8._0_1_ = 4;
    puVar5 = (undefined4 *)CTString::operator+(this,(CTString *)&local_2c);
    local_8._0_1_ = 5;
    local_28 = StringDuplicate((char *)*puVar5);
    local_24 = 0;
    local_8._0_1_ = 6;
    CWorld::Load_t(local_1a0,(CTFileName *)&local_28);
    local_8._0_1_ = 5;
    StringFree(local_28);
    local_8._0_1_ = 4;
    StringFree(local_2c);
    local_8._0_1_ = 3;
    StringFree(local_20);
    local_8._0_1_ = 2;
    StringFree(local_18);
    local_8 = CONCAT31(local_8._1_3_,1);
    StringFree(local_1c);
    CPrintF(s_Reinitialization_successfull_36232ea8);
    local_8 = 0xffffffff;
    CWorld::~CWorld(local_1a0);
    puVar3 = local_14;
  }
  local_14 = puVar3;
  FUN_360f3800();
  ExceptionList = local_10;
  return;
}

