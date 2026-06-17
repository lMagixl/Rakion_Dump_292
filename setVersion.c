
/* public: void __thiscall Xenesis::xFileManager::setVersion(unsigned int) */

void __thiscall Xenesis::xFileManager::setVersion(xFileManager *this,uint param_1)

{
  bool bVar1;
  
                    /* 0xd160  4296  ?setVersion@xFileManager@Xenesis@@QAEXI@Z */
  bVar1 = FUN_361a2f00((int *)(this + 0x40));
  if ((bVar1) && (param_1 != *(uint *)(this + 4))) {
    *(uint *)(this + 4) = param_1;
    this[0x10ee] = (xFileManager)0x1;
  }
  return;
}

