
/* public: void __thiscall CImageInfo::Attach(unsigned char *,long,long,long) */

void __thiscall
CImageInfo::Attach(CImageInfo *this,uchar *param_1,long param_2,long param_3,long param_4)

{
                    /* 0x8c360  1069  ?Attach@CImageInfo@@QAEXPAEJJJ@Z */
  *(uchar **)(this + 0xc) = param_1;
  *(long *)this = param_2;
  *(long *)(this + 4) = param_3;
  *(long *)(this + 8) = param_4;
  return;
}

