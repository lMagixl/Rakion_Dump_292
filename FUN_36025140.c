
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FUN_36025140(CTString *param_1,void *param_2,undefined4 *param_3,CTString *param_4,byte param_5,
            void *param_6,void *param_7)

{
  char *pcVar1;
  int iVar2;
  CTString *this;
  undefined4 *puVar3;
  undefined4 *puVar4;
  CListNode *pCVar5;
  char *local_180;
  undefined4 local_17c;
  char *local_178;
  undefined4 local_174;
  CListNode *local_170;
  char *local_16c;
  char *local_168;
  char *local_164;
  char *local_160;
  char *local_15c;
  char *local_158;
  char *local_154;
  char *local_150;
  CListNode *local_14c;
  CListNode *local_148 [3];
  char *local_13c;
  byte local_138 [20];
  char local_124 [264];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3620f180;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  ExceptionList = &local_14;
  CListHead::Clear((CListHead *)local_148);
  local_170 = (CListNode *)FUN_361bf99c(0xc);
  pCVar5 = (CListNode *)0x0;
  local_c = 0;
  if (local_170 != (CListNode *)0x0) {
    pCVar5 = (CListNode *)FUN_36025920((undefined4 *)local_170);
  }
  local_c = 0xffffffff;
  pcVar1 = StringDuplicate((char *)*param_3);
  StringFree(*(char **)(pCVar5 + 8));
  *(char **)(pCVar5 + 8) = pcVar1;
  CListHead::AddTail((CListHead *)local_148,pCVar5);
  iVar2 = CListHead::IsEmpty((CListHead *)local_148);
  pCVar5 = local_148[0];
  while (iVar2 == 0) {
    local_148[0] = pCVar5;
    local_180 = StringDuplicate(*(char **)(pCVar5 + 8));
    local_17c = 0;
    local_c._0_1_ = 2;
    local_c._1_3_ = 0;
    local_170 = pCVar5;
    StringFree(*(char **)(pCVar5 + 8));
    local_c = CONCAT31(local_c._1_3_,1);
    iVar2 = CListNode::IsLinked(pCVar5);
    if (iVar2 != 0) {
      CListNode::Remove(pCVar5);
    }
    operator_delete(pCVar5);
    if ((param_6 == (void *)0x0) ||
       ((iVar2 = FUN_36040d00(param_6,(CTString *)&local_180), iVar2 != 0 &&
        (iVar2 = FUN_36040d00(param_7,(CTString *)&local_180), iVar2 == 0)))) {
      local_164 = StringDuplicate(&DAT_362240d4);
      local_c._0_1_ = 3;
      this = (CTString *)CTString::operator+(param_1,(CTString *)&local_13c);
      local_c._0_1_ = 4;
      puVar3 = (undefined4 *)CTString::operator+(this,(CTString *)&local_150);
      pCVar5 = (CListNode *)findfirst(*puVar3,local_138);
      local_170 = pCVar5;
      StringFree(local_150);
      local_c._0_1_ = 3;
      StringFree(local_13c);
      local_c = CONCAT31(local_c._1_3_,1);
      StringFree(local_164);
      if (pCVar5 != (CListNode *)0xffffffff) {
        do {
          if (local_124[0] != '.') {
            local_160 = StringDuplicate(local_124);
            local_c._0_1_ = 5;
            puVar3 = (undefined4 *)
                     CTString::operator+((CTString *)&local_180,(CTString *)&local_158);
            local_c._0_1_ = 6;
            local_178 = StringDuplicate((char *)*puVar3);
            local_174 = 0;
            local_c._0_1_ = 9;
            StringFree(local_158);
            local_c._0_1_ = 8;
            StringFree(local_160);
            if ((local_138[0] & 0x10) == 0) {
              iVar2 = CTString::operator==(param_4,&DAT_362240de);
              if ((iVar2 != 0) ||
                 ((iVar2 = CTString::Matches((CTString *)&local_178,param_4), iVar2 != 0 &&
                  ((param_5 & 4) == 0)))) {
                iVar2 = FUN_360216b0((int)param_2);
                if (iVar2 - *(int *)((int)param_2 + 0x14) < 1) {
                  FUN_36021930(param_2,*(int *)((int)param_2 + 0x18));
                }
                iVar2 = *(int *)((int)param_2 + 0x14);
                *(int *)((int)param_2 + 0x14) = iVar2 + 1;
                puVar3 = (undefined4 *)FUN_360217c0(param_2,iVar2);
                pcVar1 = StringDuplicate(local_178);
                StringFree((char *)*puVar3);
                *puVar3 = pcVar1;
                puVar3[1] = local_174;
              }
            }
            else {
              if ((param_5 & 1) != 0) {
                pCVar5 = (CListNode *)FUN_361bf99c(0xc);
                local_14c = pCVar5;
                if (pCVar5 == (CListNode *)0x0) {
                  pCVar5 = (CListNode *)0x0;
                }
                else {
                  *(undefined4 *)pCVar5 = 0;
                  *(undefined4 *)(pCVar5 + 4) = 0;
                  local_c._0_1_ = 0xb;
                  pcVar1 = StringDuplicate(&DAT_36222fa0);
                  *(char **)(pCVar5 + 8) = pcVar1;
                }
                local_c._0_1_ = 8;
                local_168 = StringDuplicate(&DAT_362240d8);
                local_c._0_1_ = 0xc;
                puVar3 = (undefined4 *)
                         CTString::operator+((CTString *)&local_178,(CTString *)&local_15c);
                local_c._0_1_ = 0xd;
                pcVar1 = StringDuplicate((char *)*puVar3);
                StringFree(*(char **)(pCVar5 + 8));
                *(char **)(pCVar5 + 8) = pcVar1;
                local_c._0_1_ = 0xc;
                StringFree(local_15c);
                local_c._0_1_ = 8;
                StringFree(local_168);
                CListHead::AddTail((CListHead *)local_148,pCVar5);
              }
              if ((param_5 & 4) != 0) {
                local_16c = StringDuplicate(&DAT_362240dc);
                local_c._0_1_ = 0xe;
                puVar3 = (undefined4 *)
                         CTString::operator+((CTString *)&local_178,(CTString *)&local_154);
                local_c = CONCAT31(local_c._1_3_,0xf);
                iVar2 = FUN_360216b0((int)param_2);
                if (iVar2 - *(int *)((int)param_2 + 0x14) < 1) {
                  FUN_36021930(param_2,*(int *)((int)param_2 + 0x18));
                }
                iVar2 = *(int *)((int)param_2 + 0x14);
                *(int *)((int)param_2 + 0x14) = iVar2 + 1;
                puVar4 = (undefined4 *)FUN_360217c0(param_2,iVar2);
                pcVar1 = StringDuplicate((char *)*puVar3);
                StringFree((char *)*puVar4);
                *puVar4 = pcVar1;
                puVar4[1] = 0;
                local_c._0_1_ = 0xe;
                StringFree(local_154);
                local_c._0_1_ = 8;
                StringFree(local_16c);
              }
            }
            local_c = CONCAT31(local_c._1_3_,1);
            StringFree(local_178);
            pCVar5 = local_170;
          }
          iVar2 = findnext(pCVar5,local_138);
          local_14c = (CListNode *)(uint)(iVar2 == 0);
        } while (local_14c != (CListNode *)0x0);
      }
    }
    local_c = 0xffffffff;
    StringFree(local_180);
    iVar2 = CListHead::IsEmpty((CListHead *)local_148);
    pCVar5 = local_148[0];
  }
  ExceptionList = local_14;
  return;
}

