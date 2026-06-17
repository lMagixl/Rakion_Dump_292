
int __thiscall FUN_36100e60(void *this,float param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = FUN_36100cb0(this,param_1,(int *)&param_1);
  if (iVar2 == 0) {
    pcVar1 = (char *)((int)this + ((int)param_1 * 3 + 9) * 4);
    *pcVar1 = *pcVar1 + param_2;
    iVar2 = 0;
  }
  return iVar2;
}

