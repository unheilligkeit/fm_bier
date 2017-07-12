class CfgPatches
{
    class Fm
    {
        units[]={};
        weapons[]={};
        requiredVersion= 0.5;
        version= 0.5;
fileName = "fm_bier.pbo";
author = "Florian Meier";
    };
};
class CfgMagazines
{
	class CA_Magazine;
	class fm_bier: CA_Magazine
	{
		displayName="Heineken";
		scope=2;
		mass=5;
		author="Florian Meier";
		picture="\fm_bier\Heineken_pic.paa";
		model="\fm_bier\Bierdose.p3d";
		descriptionShort="Eine 5dl Heineken Bierdose ";
	};
};
