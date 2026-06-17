
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360301b0(void *this,int *param_1,int param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int local_c;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  iVar3 = CTString::operator==((CTString *)((int)this + 0x18),&DAT_3622548e);
  if (iVar3 != 0) {
    iVar3 = sprintf((char *)*param_1,s___45s___6_2f____6_2f____6_2f_ms_36225490);
    *param_1 = *param_1 + iVar3;
    return;
  }
  iVar3 = *(int *)((int)this + 0x1c);
  local_c = iVar3;
  if (iVar3 == 0) {
    local_c = 1;
  }
  dVar1 = (double)*(longlong *)_pTimer;
  dVar2 = (double)*(longlong *)((int)this + 0x10) / dVar1;
  iVar3 = sprintf((char *)*param_1,s___45s___6_2f____6_2f____6_2f_ms___362254b4,*(undefined4 *)this,
                  (dVar2 / ((double)param_3 / dVar1)) * _DAT_362255b0,
                  (dVar2 / ((double)param_4 / dVar1)) * _DAT_362255b0,
                  (dVar2 / (double)param_2) * _DAT_362255b8,(dVar2 / (double)local_c) * dVar1,
                  *(undefined4 *)((int)this + 0x18),iVar3 / param_2);
  *param_1 = *param_1 + iVar3;
  return;
}

