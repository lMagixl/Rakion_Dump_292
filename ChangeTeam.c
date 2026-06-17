
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::ChangeTeam(unsigned char,unsigned char) */

void __thiscall CSessionState::ChangeTeam(CSessionState *this,uchar param_1,uchar param_2)

{
  uint uVar1;
  CEntity *pCVar2;
  CPlayerCharacter local_54 [64];
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10ebd0  1163  ?ChangeTeam@CSessionState@@QAEXEE@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217fa2;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  FUN_361090d0((undefined4 *)((uint)param_2 * 0x100 + *(int *)(*(int *)(_pNetwork + 0x18) + 0x10)));
  pCVar2 = GetPlayer(this,param_1);
  uVar1 = (uint)param_1;
  FUN_36109090((void *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + uVar1 * 0x100),uVar1);
  CPlayerCharacter::CPlayerCharacter(local_54);
  local_4 = 0;
  local_14 = uVar1;
  CPlayerCharacter::operator=((CPlayerCharacter *)(pCVar2 + 0x368),local_54);
  FUN_36109100((void *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + uVar1 * 0x100),pCVar2);
  local_4 = 0xffffffff;
  CPlayerCharacter::~CPlayerCharacter(local_54);
  ExceptionList = local_c;
  return;
}

