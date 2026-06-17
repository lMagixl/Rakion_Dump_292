
/* private: class Xenesis2::Foundation::File::xFileManager * __thiscall xfsMan::FindXfsFile(class
   CTFileName &) */

xFileManager * __thiscall xfsMan::FindXfsFile(xfsMan *this,CTFileName *param_1)

{
  CTString *this_00;
  int iVar1;
  int iVar2;
  
                    /* 0x3fcc0  1650
                       ?FindXfsFile@xfsMan@@AAEPAVxFileManager@File@Foundation@Xenesis2@@AAVCTFileName@@@Z
                        */
  iVar2 = 0;
  if (0 < *(int *)(this + 200)) {
    do {
      this_00 = *(CTString **)(this + iVar2 * 4);
      iVar1 = CTString::operator==(this_00,(CTString *)param_1);
      if (iVar1 != 0) {
        return (xFileManager *)(this_00 + 8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 200));
  }
  return (xFileManager *)0x0;
}

