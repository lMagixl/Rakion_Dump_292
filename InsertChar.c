
/* public: void __thiscall CTString::InsertChar(long,char) */

void __thiscall CTString::InsertChar(CTString *this,long param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  
                    /* 0x23c40  2342  ?InsertChar@CTString@@QAEXJD@Z */
  pcVar3 = *(char **)this;
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar4 = (int)pcVar3 - (int)pcVar1;
  lVar5 = iVar4;
  if ((param_1 <= iVar4) && (lVar5 = param_1, param_1 < 0)) {
    lVar5 = 0;
  }
  FUN_36023350((void **)this,iVar4,iVar4 + 1);
  memmove((void *)(*(int *)this + lVar5 + 1),(void *)(*(int *)this + lVar5),(iVar4 - lVar5) + 1);
  *(char *)(lVar5 + *(int *)this) = param_2;
  return;
}

