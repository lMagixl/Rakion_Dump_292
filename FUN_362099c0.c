
int __thiscall FUN_362099c0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  do {
    if (param_1 < 0) {
      param_1 = -param_1;
    }
    else if (param_1 <= iVar1 + -1) {
      iVar2 = *(int *)((int)this + 4);
      do {
        if (param_2 < 0) {
          param_2 = -param_2;
        }
        else if (param_2 <= iVar2 + -1) {
          if (param_1 < 0) {
            param_1 = 0;
          }
          if (param_2 < 0) {
            param_2 = 0;
          }
          if (iVar1 <= param_1) {
            param_1 = iVar1 + -1;
          }
          if (iVar2 <= param_2) {
            param_2 = iVar2 + -1;
          }
          return iVar1 * param_2 + param_1;
        }
        if (iVar2 <= param_2) {
          param_2 = (iVar2 * 2 - param_2) + -1;
        }
      } while( true );
    }
    if (iVar1 <= param_1) {
      param_1 = (iVar1 * 2 - param_1) + -1;
    }
  } while( true );
}

