
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360315d0(void *this,int param_1)

{
  long unaff_ESI;
  
  if (param_1 < 0x400) {
    CTString::CTString(this,unaff_ESI,(char *)0x0,&DAT_362255d0,param_1);
    return;
  }
  if (param_1 < 0x100000) {
    CTString::CTString(this,unaff_ESI,(char *)0x0,s___1fkB_362255d4,(double)param_1 * _DAT_36225650,
                       0);
    return;
  }
  CTString::CTString(this,unaff_ESI,(char *)0x0,s___1fMB_362255dc,(double)param_1 * _DAT_36225648,0)
  ;
  return;
}

