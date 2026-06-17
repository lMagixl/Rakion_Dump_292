
char * FUN_3603afc0(void)

{
  uint in_EAX;
  HMODULE lpSource;
  DWORD dwLanguageId;
  LPSTR lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  
  if (in_EAX < 0xc000008e) {
    if (in_EAX == 0xc000008d) {
      return s_FLT_DENORMAL_OPERAND_362266dc;
    }
    if (in_EAX < 0xc0000007) {
      if (in_EAX == 0xc0000006) {
        return s_IN_PAGE_ERROR_3622679c;
      }
      if (in_EAX < 0x80000004) {
        if (in_EAX == 0x80000003) {
          return s_BREAKPOINT_362266ac;
        }
        if (in_EAX == 0x80000001) {
          return s_GUARD_PAGE_36226800;
        }
        if (in_EAX == 0x80000002) {
          return s_DATATYPE_MISALIGNMENT_36226694;
        }
      }
      else {
        if (in_EAX == 0x80000004) {
          return s_SINGLE_STEP_362266b8;
        }
        if (in_EAX == 0xc0000005) {
          return s_I_ACCESS_VIOLATION_3622667e + 2;
        }
      }
    }
    else {
      switch(in_EAX) {
      case 0xc0000008:
        return s_INVALID_HANDLE_3622680c;
      case 0xc000001d:
        return s_ILLEGAL_INSTRUCTION_362267ac;
      case 0xc0000025:
        return s_NONCONTINUABLE_EXCEPTION_362267c0;
      case 0xc0000026:
        return s_INVALID_DISPOSITION_362267ec;
      case 0xc000008c:
        return s_ARRAY_BOUNDS_EXCEEDED_362266c4;
      }
    }
  }
  else {
    switch(in_EAX) {
    case 0xc000008e:
      return s_FLT_DIVIDE_BY_ZERO_362266f4;
    case 0xc000008f:
      return s_FLT_INEXACT_RESULT_36226708;
    case 0xc0000090:
      return s_FLT_INVALID_OPERATION_3622671c;
    case 0xc0000091:
      return s_FLT_OVERFLOW_36226734;
    case 0xc0000092:
      return s_FLT_STACK_CHECK_36226744;
    case 0xc0000093:
      return s_FLT_UNDERFLOW_36226754;
    case 0xc0000094:
      return s_INT_DIVIDE_BY_ZERO_36226764;
    case 0xc0000095:
      return s_INT_OVERFLOW_36226778;
    case 0xc0000096:
      return s_PRIV_INSTRUCTION_36226788;
    case 0xc00000fd:
      return s_STACK_OVERFLOW_362267dc;
    }
  }
  Arguments = (va_list *)0x0;
  nSize = 0x200;
  lpBuffer = &DAT_362bed70;
  dwLanguageId = 0;
  lpSource = GetModuleHandleA(s_NTDLL_DLL_3622681c);
  FormatMessageA(0xa00,lpSource,in_EAX,dwLanguageId,lpBuffer,nSize,Arguments);
  return &DAT_362bed70;
}

