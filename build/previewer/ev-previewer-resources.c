#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.ev_previewer"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[1889]; const double alignment; void * const ptr;}  ev_previewer_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0034, 0001, 0000, 0000, 0000, 0000, 0000, 0050, 0011, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 
  0004, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 0006, 0000, 0000, 0000, 0007, 0000, 0000, 0000, 
  0010, 0000, 0000, 0000, 0056, 0361, 0373, 0370, 0010, 0000, 0000, 0000, 0034, 0001, 0000, 0000, 
  0003, 0000, 0114, 0000, 0040, 0001, 0000, 0000, 0054, 0001, 0000, 0000, 0113, 0120, 0220, 0013, 
  0004, 0000, 0000, 0000, 0054, 0001, 0000, 0000, 0004, 0000, 0114, 0000, 0060, 0001, 0000, 0000, 
  0064, 0001, 0000, 0000, 0223, 0074, 0175, 0176, 0000, 0000, 0000, 0000, 0064, 0001, 0000, 0000, 
  0014, 0000, 0166, 0000, 0100, 0001, 0000, 0000, 0203, 0003, 0000, 0000, 0260, 0267, 0044, 0060, 
  0001, 0000, 0000, 0000, 0203, 0003, 0000, 0000, 0006, 0000, 0114, 0000, 0214, 0003, 0000, 0000, 
  0220, 0003, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0220, 0003, 0000, 0000, 
  0001, 0000, 0114, 0000, 0224, 0003, 0000, 0000, 0230, 0003, 0000, 0000, 0035, 0340, 0354, 0024, 
  0000, 0000, 0000, 0000, 0230, 0003, 0000, 0000, 0023, 0000, 0166, 0000, 0260, 0003, 0000, 0000, 
  0101, 0006, 0000, 0000, 0005, 0253, 0373, 0164, 0000, 0000, 0000, 0000, 0101, 0006, 0000, 0000, 
  0024, 0000, 0166, 0000, 0130, 0006, 0000, 0000, 0104, 0007, 0000, 0000, 0371, 0364, 0267, 0025, 
  0003, 0000, 0000, 0000, 0104, 0007, 0000, 0000, 0007, 0000, 0114, 0000, 0114, 0007, 0000, 0000, 
  0120, 0007, 0000, 0000, 0141, 0141, 0024, 0114, 0007, 0000, 0000, 0000, 0120, 0007, 0000, 0000, 
  0012, 0000, 0114, 0000, 0134, 0007, 0000, 0000, 0140, 0007, 0000, 0000, 0165, 0151, 0057, 0000, 
  0006, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0005, 0000, 0000, 0000, 0157, 0162, 0147, 0057, 
  0003, 0000, 0000, 0000, 0160, 0162, 0145, 0166, 0151, 0145, 0167, 0145, 0162, 0056, 0165, 0151, 
  0305, 0014, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0315, 0227, 0115, 0157, 0333, 0060, 
  0014, 0206, 0357, 0375, 0025, 0234, 0216, 0033, 0224, 0164, 0335, 0145, 0030, 0154, 0027, 0050, 
  0260, 0026, 0273, 0014, 0305, 0326, 0235, 0015, 0331, 0146, 0034, 0065, 0262, 0344, 0111, 0124, 
  0322, 0354, 0327, 0117, 0166, 0334, 0064, 0115, 0212, 0070, 0037, 0303, 0222, 0243, 0154, 0222, 
  0172, 0337, 0207, 0022, 0235, 0104, 0327, 0117, 0225, 0202, 0051, 0132, 0047, 0215, 0216, 0331, 
  0307, 0301, 0045, 0003, 0324, 0271, 0051, 0244, 0056, 0143, 0366, 0353, 0341, 0226, 0177, 0146, 
  0327, 0311, 0105, 0364, 0216, 0163, 0270, 0103, 0215, 0126, 0020, 0026, 0060, 0223, 0064, 0206, 
  0122, 0211, 0002, 0341, 0323, 0340, 0352, 0152, 0160, 0011, 0234, 0057, 0202, 0336, 0163, 0250, 
  0114, 0201, 0137, 0240, 0051, 0033, 0126, 0315, 0143, 0251, 0011, 0355, 0110, 0344, 0230, 0104, 
  0026, 0177, 0173, 0151, 0321, 0201, 0222, 0131, 0314, 0112, 0232, 0174, 0140, 0057, 0233, 0067, 
  0245, 0330, 0060, 0211, 0114, 0366, 0210, 0071, 0101, 0256, 0204, 0163, 0061, 0273, 0243, 0311, 
  0215, 0047, 0062, 0232, 0201, 0054, 0142, 0126, 0333, 0120, 0216, 0045, 0121, 0155, 0115, 0215, 
  0226, 0346, 0240, 0105, 0205, 0061, 0123, 0042, 0103, 0305, 0200, 0254, 0320, 0116, 0011, 0022, 
  0231, 0012, 0017, 0347, 0350, 0130, 0222, 0336, 0067, 0031, 0321, 0360, 0071, 0141, 0043, 0065, 
  0027, 0072, 0035, 0231, 0334, 0207, 0330, 0007, 0353, 0161, 0113, 0244, 0305, 0034, 0345, 0024, 
  0135, 0132, 0340, 0110, 0170, 0105, 0275, 0011, 0144, 0214, 0042, 0131, 0247, 0204, 0117, 0364, 
  0246, 0270, 0126, 0033, 0320, 0130, 0072, 0050, 0202, 0204, 0012, 0267, 0052, 0025, 0071, 0005, 
  0120, 0151, 0263, 0140, 0311, 0114, 0352, 0101, 0335, 0143, 0315, 0073, 0114, 0275, 0056, 0320, 
  0052, 0251, 0161, 0123, 0255, 0243, 0271, 0012, 0115, 0151, 0101, 0167, 0031, 0316, 0227, 0045, 
  0272, 0320, 0143, 0276, 0330, 0254, 0351, 0307, 0260, 0213, 0033, 0056, 0032, 0323, 0323, 0240, 
  0322, 0360, 0332, 0342, 0124, 0032, 0357, 0170, 0055, 0112, 0144, 0377, 0024, 0370, 0255, 0120, 
  0356, 0110, 0342, 0013, 0155, 0160, 0037, 0264, 0355, 0303, 0172, 0335, 0327, 0226, 0134, 0131, 
  0265, 0276, 0127, 0063, 0334, 0274, 0312, 0214, 0222, 0371, 0152, 0326, 0316, 0074, 0165, 0060, 
  0163, 0216, 0054, 0277, 0207, 0027, 0207, 0160, 0134, 0372, 0331, 0211, 0141, 0033, 0175, 0070, 
  0277, 0077, 0306, 0124, 0134, 0352, 0063, 0103, 0367, 0125, 0053, 0141, 0113, 0014, 0127, 0037, 
  0017, 0272, 0371, 0235, 0253, 0176, 0200, 0135, 0340, 0233, 0000, 0327, 0067, 0121, 0063, 0061, 
  0167, 0251, 0033, 0233, 0131, 0332, 0145, 0257, 0203, 0331, 0003, 0271, 0361, 0164, 0146, 0314, 
  0177, 0216, 0303, 0270, 0234, 0034, 0207, 0074, 0270, 0332, 0221, 0171, 0210, 0074, 0366, 0324, 
  0056, 0255, 0237, 0025, 0306, 0037, 0350, 0220, 0240, 0021, 0010, 0102, 0027, 0120, 0211, 0311, 
  0342, 0030, 0067, 0027, 0032, 0106, 0222, 0100, 0352, 0166, 0035, 0230, 0025, 0146, 0266, 0067, 
  0341, 0116, 0350, 0216, 0224, 0273, 0350, 0075, 0111, 0177, 0153, 0053, 0154, 0174, 0256, 0236, 
  0213, 0154, 0002, 0237, 0112, 0047, 0003, 0201, 0136, 0334, 0053, 0215, 0351, 0343, 0054, 0363, 
  0245, 0367, 0240, 0301, 0327, 0107, 0131, 0170, 0065, 0043, 0117, 0040, 0077, 0064, 0132, 0037, 
  0156, 0140, 0175, 0106, 0375, 0157, 0003, 0333, 0146, 0344, 0356, 0006, 0326, 0217, 0342, 0111, 
  0134, 0204, 0373, 0307, 0263, 0360, 0003, 0356, 0110, 0057, 0253, 0303, 0353, 0044, 0076, 0172, 
  0247, 0347, 0360, 0345, 0137, 0305, 0305, 0137, 0265, 0323, 0263, 0003, 0000, 0050, 0165, 0165, 
  0141, 0171, 0051, 0147, 0156, 0157, 0155, 0145, 0057, 0000, 0000, 0000, 0007, 0000, 0000, 0000, 
  0057, 0000, 0000, 0000, 0001, 0000, 0000, 0000, 0164, 0150, 0165, 0155, 0142, 0156, 0141, 0151, 
  0154, 0055, 0146, 0162, 0141, 0155, 0145, 0056, 0160, 0156, 0147, 0000, 0000, 0000, 0000, 0000, 
  0100, 0003, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0353, 0014, 0360, 0163, 0347, 0345, 
  0222, 0342, 0142, 0140, 0140, 0340, 0365, 0364, 0160, 0011, 0002, 0322, 0055, 0100, 0274, 0232, 
  0203, 0015, 0110, 0056, 0337, 0147, 0342, 0002, 0244, 0030, 0213, 0203, 0334, 0235, 0030, 0326, 
  0235, 0223, 0171, 0011, 0344, 0260, 0045, 0171, 0273, 0273, 0060, 0374, 0007, 0301, 0005, 0173, 
  0227, 0117, 0006, 0212, 0160, 0026, 0170, 0104, 0026, 0003, 0265, 0137, 0007, 0141, 0106, 0047, 
  0215, 0331, 0025, 0100, 0101, 0366, 0022, 0117, 0137, 0127, 0366, 0333, 0334, 0102, 0142, 0046, 
  0042, 0015, 0333, 0004, 0030, 0031, 0030, 0230, 0016, 0170, 0272, 0070, 0206, 0124, 0334, 0172, 
  0173, 0303, 0067, 0110, 0332, 0120, 0244, 0365, 0242, 0366, 0356, 0306, 0003, 0015, 0136, 0251, 
  0377, 0127, 0237, 0151, 0260, 0177, 0034, 0306, 0126, 0271, 0310, 0245, 0235, 0327, 0145, 0316, 
  0172, 0257, 0253, 0333, 0032, 0073, 0357, 0157, 0274, 0262, 0354, 0353, 0075, 0343, 0254, 0265, 
  0133, 0077, 0032, 0374, 0342, 0373, 0252, 0362, 0122, 0270, 0311, 0114, 0116, 0274, 0055, 0070, 
  0121, 0042, 0334, 0340, 0132, 0353, 0205, 0311, 0157, 0036, 0133, 0005, 0154, 0271, 0367, 0273, 
  0047, 0161, 0366, 0065, 0311, 0256, 0245, 0206, 0061, 0223, 0367, 0370, 0147, 0277, 0337, 0373, 
  0075, 0367, 0120, 0201, 0137, 0321, 0354, 0047, 0166, 0047, 0373, 0125, 0312, 0277, 0376, 0072, 
  0131, 0275, 0043, 0244, 0172, 0355, 0165, 0025, 0175, 0317, 0171, 0307, 0057, 0136, 0214, 0272, 
  0275, 0375, 0345, 0274, 0207, 0313, 0014, 0154, 0256, 0125, 0255, 0270, 0356, 0127, 0326, 0271, 
  0264, 0254, 0335, 0366, 0244, 0352, 0311, 0340, 0111, 0367, 0331, 0125, 0156, 0056, 0253, 0156, 
  0133, 0133, 0326, 0166, 0134, 0145, 0377, 0253, 0052, 0163, 0131, 0331, 0050, 0346, 0043, 0133, 
  0313, 0332, 0033, 0037, 0256, 0235, 0027, 0077, 0251, 0346, 0226, 0342, 0261, 0211, 0037, 0003, 
  0044, 0352, 0304, 0046, 0234, 0335, 0270, 0361, 0112, 0341, 0307, 0070, 0167, 0327, 0127, 0125, 
  0326, 0365, 0057, 0322, 0005, 0230, 0217, 0372, 0276, 0345, 0371, 0276, 0365, 0234, 0203, 0016, 
  0353, 0243, 0250, 0315, 0165, 0353, 0042, 0353, 0177, 0175, 0332, 0340, 0273, 0377, 0316, 0262, 
  0307, 0217, 0155, 0152, 0057, 0157, 0160, 0136, 0303, 0252, 0164, 0071, 0347, 0377, 0317, 0357, 
  0207, 0312, 0176, 0064, 0227, 0105, 0250, 0337, 0067, 0231, 0366, 0372, 0313, 0321, 0071, 0366, 
  0177, 0003, 0230, 0234, 0034, 0070, 0070, 0030, 0025, 0025, 0130, 0132, 0032, 0004, 0004, 0260, 
  0161, 0360, 0311, 0001, 0071, 0370, 0344, 0300, 0034, 0112, 0055, 0150, 0230, 0100, 0300, 0002, 
  0007, 0017, 0002, 0026, 0050, 0250, 0140, 0221, 0373, 0145, 0177, 0213, 0357, 0374, 0357, 0304, 
  0267, 0133, 0267, 0270, 0045, 0317, 0073, 0156, 0131, 0317, 0231, 0344, 0126, 0340, 0373, 0051, 
  0056, 0334, 0372, 0144, 0224, 0302, 0263, 0233, 0357, 0334, 0105, 0156, 0063, 0036, 0066, 0005, 
  0306, 0111, 0366, 0244, 0347, 0125, 0271, 0314, 0111, 0232, 0002, 0357, 0075, 0343, 0262, 0216, 
  0115, 0237, 0365, 0223, 0275, 0113, 0362, 0210, 0351, 0311, 0350, 0111, 0313, 0125, 0366, 0277, 
  0376, 0272, 0133, 0345, 0271, 0312, 0331, 0352, 0235, 0056, 0311, 0347, 0326, 0233, 0076, 0136, 
  0076, 0353, 0147, 0051, 0333, 0105, 0376, 0042, 0266, 0266, 0351, 0052, 0346, 0133, 0255, 0031, 
  0066, 0362, 0165, 0354, 0055, 0153, 0373, 0170, 0260, 0176, 0345, 0315, 0367, 0236, 0277, 0366, 
  0070, 0307, 0274, 0232, 0341, 0261, 0162, 0247, 0066, 0117, 0137, 0267, 0151, 0276, 0116, 0074, 
  0367, 0341, 0342, 0263, 0373, 0324, 0075, 0137, 0357, 0135, 0276, 0365, 0132, 0326, 0207, 0333, 
  0133, 0216, 0005, 0046, 0226, 0107, 0344, 0117, 0177, 0161, 0371, 0354, 0323, 0210, 0352, 0367, 
  0173, 0267, 0337, 0373, 0177, 0057, 0301, 0117, 0343, 0231, 0066, 0117, 0366, 0142, 0211, 0373, 
  0106, 0337, 0342, 0004, 0354, 0034, 0174, 0064, 0230, 0016, 0155, 0157, 0232, 0150, 0247, 0370, 
  0203, 0331, 0322, 0174, 0023, 0233, 0136, 0253, 0012, 0050, 0171, 0063, 0170, 0272, 0372, 0271, 
  0254, 0163, 0112, 0150, 0002, 0000, 0075, 0256, 0070, 0150, 0000, 0050, 0165, 0165, 0141, 0171, 
  0051, 0145, 0166, 0151, 0156, 0143, 0145, 0055, 0160, 0162, 0145, 0166, 0151, 0145, 0167, 0145, 
  0162, 0056, 0143, 0163, 0163, 0000, 0000, 0000, 0242, 0001, 0000, 0000, 0001, 0000, 0000, 0000, 
  0170, 0332, 0225, 0220, 0317, 0116, 0303, 0060, 0014, 0306, 0357, 0175, 0212, 0150, 0047, 0070, 
  0264, 0101, 0332, 0264, 0103, 0166, 0341, 0262, 0127, 0340, 0072, 0245, 0311, 0107, 0032, 0221, 
  0304, 0221, 0233, 0264, 0103, 0210, 0167, 0247, 0035, 0114, 0002, 0061, 0011, 0141, 0313, 0007, 
  0377, 0371, 0176, 0262, 0335, 0031, 0112, 0005, 0251, 0264, 0223, 0307, 0334, 0131, 0062, 0065, 
  0256, 0131, 0326, 0016, 0342, 0255, 0021, 0213, 0365, 0304, 0026, 0334, 0216, 0345, 0065, 0100, 
  0211, 0221, 0202, 0267, 0207, 0357, 0215, 0331, 0333, 0062, 0050, 0261, 0315, 0347, 0113, 0354, 
  0227, 0330, 0345, 0363, 0217, 0021, 0037, 0027, 0234, 0022, 0225, 0303, 0335, 0206, 0061, 0122, 
  0145, 0003, 0045, 0245, 0044, 0166, 0322, 0045, 0212, 0220, 0230, 0174, 0062, 0220, 0231, 0261, 
  0356, 0001, 0226, 0325, 0313, 0062, 0324, 0330, 0047, 0355, 0103, 0373, 0314, 0072, 0242, 0313, 
  0311, 0155, 0356, 0305, 0166, 0361, 0275, 0330, 0175, 0361, 0265, 0171, 0161, 0114, 0065, 0331, 
  0326, 0120, 0040, 0126, 0342, 0261, 0014, 0210, 0070, 0365, 0356, 0164, 0051, 0034, 0232, 0367, 
  0246, 0071, 0116, 0117, 0013, 0364, 0172, 0316, 0077, 0044, 0152, 0104, 0200, 0051, 0260, 0177, 
  0151, 0257, 0163, 0267, 0040, 0267, 0237, 0372, 0213, 0064, 0017, 0276, 0340, 0363, 0252, 0254, 
  0255, 0365, 0311, 0051, 0361, 0260, 0142, 0076, 0000, 0040, 0345, 0214, 0006, 0000, 0050, 0165, 
  0165, 0141, 0171, 0051, 0145, 0166, 0151, 0156, 0143, 0145, 0057, 0000, 0010, 0000, 0000, 0000, 
  0160, 0162, 0145, 0166, 0151, 0145, 0167, 0145, 0162, 0057, 0000, 0000, 0000, 0000, 0000, 0000
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[1889]; const double alignment; void * const ptr;}  ev_previewer_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\034\001\000\000\000\000\000\050\011\000\000\000"
  "\000\000\000\000\001\000\000\000\002\000\000\000\004\000\000\000"
  "\004\000\000\000\004\000\000\000\006\000\000\000\007\000\000\000"
  "\010\000\000\000\056\361\373\370\010\000\000\000\034\001\000\000"
  "\003\000\114\000\040\001\000\000\054\001\000\000\113\120\220\013"
  "\004\000\000\000\054\001\000\000\004\000\114\000\060\001\000\000"
  "\064\001\000\000\223\074\175\176\000\000\000\000\064\001\000\000"
  "\014\000\166\000\100\001\000\000\203\003\000\000\260\267\044\060"
  "\001\000\000\000\203\003\000\000\006\000\114\000\214\003\000\000"
  "\220\003\000\000\324\265\002\000\377\377\377\377\220\003\000\000"
  "\001\000\114\000\224\003\000\000\230\003\000\000\035\340\354\024"
  "\000\000\000\000\230\003\000\000\023\000\166\000\260\003\000\000"
  "\101\006\000\000\005\253\373\164\000\000\000\000\101\006\000\000"
  "\024\000\166\000\130\006\000\000\104\007\000\000\371\364\267\025"
  "\003\000\000\000\104\007\000\000\007\000\114\000\114\007\000\000"
  "\120\007\000\000\141\141\024\114\007\000\000\000\120\007\000\000"
  "\012\000\114\000\134\007\000\000\140\007\000\000\165\151\057\000"
  "\006\000\000\000\002\000\000\000\005\000\000\000\157\162\147\057"
  "\003\000\000\000\160\162\145\166\151\145\167\145\162\056\165\151"
  "\305\014\000\000\001\000\000\000\170\332\315\227\115\157\333\060"
  "\014\206\357\375\025\234\216\033\224\164\335\145\030\154\027\050"
  "\260\026\273\014\305\326\235\015\331\146\034\065\262\344\111\124"
  "\322\354\327\117\166\334\064\115\212\070\037\303\222\243\154\222"
  "\172\337\207\022\235\104\327\117\225\202\051\132\047\215\216\331"
  "\307\301\045\003\324\271\051\244\056\143\366\353\341\226\177\146"
  "\327\311\105\364\216\163\270\103\215\126\020\026\060\223\064\206"
  "\122\211\002\341\323\340\352\152\160\011\234\057\202\336\163\250"
  "\114\201\137\240\051\033\126\315\143\251\011\355\110\344\230\104"
  "\026\177\173\151\321\201\222\131\314\112\232\174\140\057\233\067"
  "\245\330\060\211\114\366\210\071\101\256\204\163\061\273\243\311"
  "\215\047\062\232\201\054\142\126\333\120\216\045\121\155\115\215"
  "\226\346\240\105\205\061\123\042\103\305\200\254\320\116\011\022"
  "\231\012\017\347\350\130\222\336\067\031\321\360\071\141\043\065"
  "\027\072\035\231\334\207\330\007\353\161\113\244\305\034\345\024"
  "\135\132\340\110\170\105\275\011\144\214\042\131\247\204\117\364"
  "\246\270\126\033\320\130\072\050\202\204\012\267\052\025\071\005"
  "\120\151\263\140\311\114\352\101\335\143\315\073\114\275\056\320"
  "\052\251\161\123\255\243\271\012\115\151\101\167\031\316\227\045"
  "\272\320\143\276\330\254\351\307\260\213\033\056\032\323\323\240"
  "\322\360\332\342\124\032\357\170\055\112\144\377\024\370\255\120"
  "\356\110\342\013\155\160\037\264\355\303\172\335\327\226\134\131"
  "\265\276\127\063\334\274\312\214\222\371\152\326\316\074\165\060"
  "\163\216\054\277\207\027\207\160\134\372\331\211\141\033\175\070"
  "\277\077\306\124\134\352\063\103\367\125\053\141\113\014\127\037"
  "\017\272\371\235\253\176\200\135\340\233\000\327\067\121\063\061"
  "\167\251\033\233\131\332\145\257\203\331\003\271\361\164\146\314"
  "\177\216\303\270\234\034\207\074\270\332\221\171\210\074\366\324"
  "\056\255\237\025\306\037\350\220\240\021\010\102\027\120\211\311"
  "\342\030\067\027\032\106\222\100\352\166\035\230\025\146\266\067"
  "\341\116\350\216\224\273\350\075\111\177\153\053\154\174\256\236"
  "\213\154\002\237\112\047\003\201\136\334\053\215\351\343\054\363"
  "\245\367\240\301\327\107\131\170\065\043\117\040\077\064\132\037"
  "\156\140\175\106\375\157\003\333\146\344\356\006\326\217\342\111"
  "\134\204\373\307\263\360\003\356\110\057\253\303\353\044\076\172"
  "\247\347\360\345\137\305\305\137\265\323\263\003\000\050\165\165"
  "\141\171\051\147\156\157\155\145\057\000\000\000\007\000\000\000"
  "\057\000\000\000\001\000\000\000\164\150\165\155\142\156\141\151"
  "\154\055\146\162\141\155\145\056\160\156\147\000\000\000\000\000"
  "\100\003\000\000\001\000\000\000\170\332\353\014\360\163\347\345"
  "\222\342\142\140\140\340\365\364\160\011\002\322\055\100\274\232"
  "\203\015\110\056\337\147\342\002\244\030\213\203\334\235\030\326"
  "\235\223\171\011\344\260\045\171\273\273\060\374\007\301\005\173"
  "\227\117\006\212\160\026\170\104\026\003\265\137\007\141\106\047"
  "\215\331\025\100\101\366\022\117\137\127\366\333\334\102\142\046"
  "\042\015\333\004\030\031\030\230\016\170\272\070\206\124\334\172"
  "\173\303\067\110\332\120\244\365\242\366\356\306\003\015\136\251"
  "\377\127\237\151\260\177\034\306\126\271\310\245\235\327\145\316"
  "\172\257\253\333\032\073\357\157\274\262\354\353\075\343\254\265"
  "\133\077\032\374\342\373\252\362\122\270\311\114\116\274\055\070"
  "\121\042\334\340\132\353\205\311\157\036\133\005\154\271\367\273"
  "\047\161\366\065\311\256\245\206\061\223\367\370\147\277\337\373"
  "\075\367\120\201\137\321\354\047\166\047\373\125\312\277\376\072"
  "\131\275\043\244\172\355\165\025\175\317\171\307\057\136\214\272"
  "\275\375\345\274\207\313\014\154\256\125\255\270\356\127\326\271"
  "\264\254\335\366\244\352\311\340\111\367\331\125\156\056\253\156"
  "\133\133\326\166\134\145\377\253\052\163\131\331\050\346\043\133"
  "\313\332\033\037\256\235\027\077\251\346\226\342\261\211\037\003"
  "\044\352\304\046\234\335\270\361\112\341\307\070\167\327\127\125"
  "\326\365\057\322\005\230\217\372\276\345\371\276\365\234\203\016"
  "\353\243\250\315\165\353\042\353\177\175\332\340\273\377\316\262"
  "\307\217\155\152\057\157\160\136\303\252\164\071\347\377\317\357"
  "\207\312\176\064\227\105\250\337\067\231\366\372\313\321\071\366"
  "\177\003\230\234\034\070\070\030\025\025\130\132\032\004\004\260"
  "\161\360\311\001\071\370\344\300\034\112\055\150\230\100\300\002"
  "\007\017\002\026\050\250\140\221\373\145\177\213\357\374\357\304"
  "\267\133\267\270\045\317\073\156\131\317\231\344\126\340\373\051"
  "\056\334\372\144\224\302\263\233\357\334\105\156\063\036\066\005"
  "\306\111\366\244\347\125\271\314\111\232\002\357\075\343\262\216"
  "\115\237\365\223\275\113\362\210\351\311\350\111\313\125\366\277"
  "\376\272\133\345\271\312\331\352\235\056\311\347\326\233\076\136"
  "\076\353\147\051\333\105\376\042\266\266\351\052\346\133\255\031"
  "\066\362\165\354\055\153\373\170\260\176\345\315\367\236\277\366"
  "\070\307\274\232\341\261\162\247\066\117\137\267\151\276\116\074"
  "\367\341\342\263\373\324\075\137\357\135\276\365\132\326\207\333"
  "\133\216\005\046\226\107\344\117\177\161\371\354\323\210\352\367"
  "\173\267\337\373\177\057\301\117\343\231\066\117\366\142\211\373"
  "\106\337\342\004\354\034\174\064\230\016\155\157\232\150\247\370"
  "\203\331\322\174\023\233\136\253\012\050\171\063\170\272\372\271"
  "\254\163\112\150\002\000\075\256\070\150\000\050\165\165\141\171"
  "\051\145\166\151\156\143\145\055\160\162\145\166\151\145\167\145"
  "\162\056\143\163\163\000\000\000\242\001\000\000\001\000\000\000"
  "\170\332\225\220\317\116\303\060\014\306\357\175\212\150\047\070"
  "\264\101\332\264\103\166\341\262\127\340\072\245\311\107\032\221"
  "\304\221\233\264\103\210\167\247\035\114\002\061\011\141\313\007"
  "\377\371\176\262\335\031\112\005\251\264\223\307\334\131\062\065"
  "\256\131\326\016\342\255\021\213\365\304\026\334\216\345\065\100"
  "\211\221\202\267\207\357\215\331\333\062\050\261\315\347\113\354"
  "\227\330\345\363\217\021\037\027\234\022\225\303\335\206\061\122"
  "\145\003\045\245\044\166\322\045\212\220\230\174\062\220\231\261"
  "\356\001\226\325\313\062\324\330\047\355\103\373\314\072\242\313"
  "\311\155\356\305\166\361\275\330\175\361\265\171\161\114\065\331"
  "\326\120\040\126\342\261\014\210\070\365\356\164\051\034\232\367"
  "\246\071\116\117\013\364\172\316\077\044\152\104\200\051\260\177"
  "\151\257\163\267\040\267\237\372\213\064\017\276\340\363\252\254"
  "\255\365\311\051\361\260\142\076\000\040\345\214\006\000\050\165"
  "\165\141\171\051\145\166\151\156\143\145\057\000\010\000\000\000"
  "\160\162\145\166\151\145\167\145\162\057\000\000\000\000\000\000"
  "" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { ev_previewer_resource_data.data, sizeof (ev_previewer_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };
extern GResource *ev_previewer_get_resource (void);
GResource *ev_previewer_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}