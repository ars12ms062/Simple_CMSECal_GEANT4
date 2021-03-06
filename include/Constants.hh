#ifndef Constants_h
#define Constants_h 1

#include "globals.hh"
#include "G4SystemOfUnits.hh"

constexpr G4int nofEmBarEta = 170; 	// Max Value = 170
constexpr G4int nofEmBarPhi = 360; 		// Max Value = 360
constexpr G4int nofEmBarCells = nofEmBarEta*nofEmBarPhi;

//constexpr G4int kNofEmECCells = 2653*4;	// Max Value = 2691
constexpr G4int kNofEmECCells = 2708*4;	// Max Value = 2691

constexpr G4double kBz = 4.0*tesla;

constexpr G4double trPhiAng = 360;
constexpr G4int PIB_num = 3;
constexpr G4double PIB_rMin[] = {44,73,102};
constexpr G4double PIB_thick = 285*(4.0/3);
constexpr G4double PIB_halfz = 0.5*530;
constexpr G4int PID_num = 4;
constexpr G4double PID_posz[] = {345,465,-345,-465};
constexpr G4double PID_r[] = {60, 150};
constexpr G4double PID_halfz = 0.5*285*(4.0/3);
constexpr G4int TIB_num = 4;
constexpr G4double TIB_rMin[] = {255,339,418.5,498};
constexpr G4double TIB_thick[] = {2*320,2*320,320,320};
constexpr G4int TID_num = 12;
constexpr G4double TID_posz[] = {800,900,1000};
constexpr G4int TOB_num = 6;
constexpr G4double TOB_rMin[] = {608,692,780,868,965,1080};
constexpr G4double TOB_thick[] = {2*500,2*500,500,500,500,500};
constexpr G4int TEC_num = 53;
constexpr G4double TEC_ring[][2] = {{225,325},{320,405},{380,520},{515,640},{620,770},{740,930},{880,1100}};
constexpr G4double TEC_disk[][2] = {{1240,1280},{1390,1420},{1540,1580},{1660,1700},{1840,1870},{2020,2050},{2220,2250},{2460,2490},{2700,2740}};

constexpr G4double PIBMat_thick[] = {250, 180, 125};
constexpr G4double PIBSup_thick = 0.6;
constexpr G4double PIBCables_thick = 250;
constexpr G4double PIDMat_thick[] = {2000, 1000, 450};

constexpr G4double TIBSupp_thick[] = {1200, 250};
constexpr G4double TIBSupp2_thick = 100;
constexpr G4double TIBSupp_pos[] = {226, 301, 372, 442, 513};
constexpr G4double TIBEle_thick = 150;
//constexpr G4double TIBSupp_pos[] = {226, 301, 372, 442};

constexpr G4double TIDSupp_thick = 3000;
constexpr G4double TIDECSupp_pos = 1150;
constexpr G4double TIDEle_thick = 350;

constexpr G4double TOBEleCool_dr[] = {100, 50};
constexpr G4double rWiring1 = 100;
constexpr G4double zWiring1 = 97.7;
constexpr G4double rWiring2 = 100;
constexpr G4double zWiring2 = 170;
constexpr G4double rSupp = 8;
constexpr G4double zSupp1 = 10;
constexpr G4double zSupp2 = 6;
constexpr G4double zSupp3 = 2;
constexpr G4double zSupp3Pos = 225;

constexpr G4double TECMat_thick = 8;

constexpr G4double PShower_thick[] = {1,1,2,9.3,2,2,1,1,1,2,3.7,2,2,1};

#endif
