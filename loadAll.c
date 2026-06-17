
/* public: unsigned int __thiscall Xenesis::xFile::loadAll(void *) */

uint __thiscall Xenesis::xFile::loadAll(xFile *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x1a4ad0  4236  ?loadAll@xFile@Xenesis@@QAEIPAX@Z */
  rewind(this);
  uVar2 = 0;
  if (*(int *)(*(int *)(this + 0x20) + 8) != 0) {
    do {
      uVar1 = load(this,param_1);
      uVar2 = uVar2 + uVar1;
      param_1 = (void *)((int)param_1 + uVar1);
    } while (uVar2 < *(uint *)(*(int *)(this + 0x20) + 8));
  }
  return uVar2;
}

