
/* public: virtual int __thiscall CTMemoryStream::IsReadable(void) */

int __thiscall CTMemoryStream::IsReadable(CTMemoryStream *this)

{
                    /* 0x3f1d0  2457  ?IsReadable@CTMemoryStream@@UAEHXZ */
  if ((*(int *)(this + 0x50) != 0) && (*(int *)(this + 0x58) == 0)) {
    return 1;
  }
  return 0;
}

