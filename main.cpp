#include <iostream>

using namespace std;

int main()
{
    double woodcuttingxp = 0;
    double magicxp = 0;
    double inv = 0;
    double gp = 50;
    double combatlvl = 1;
    double magiclvl;
    double mininglvl =1;
    double woodcuttinglvl = 1;
    double ttskilllvl = combatlvl + magiclvl + mininglvl + woodcuttinglvl;
    double mgdamage = magiclvl/2;
    double cbdamage = combatlvl/2;
    double airrunes = 5000;
    double mindrunes = 5000;
    double waterrunes = 5000;
    double earthrunes = 5000;
    double firerunes = 5000;

    bool kakica = true;
    magiclvl = magicxp / 100.0 + 1;
    string tree;
    string swordequip = "None";
    string cbspell;
    string mgcb;
    string mgtrain;
    string src;
    string buysell;
    string other;
    string menu;
    string quest;
    string skill;
    string skillorquest;
    string playrs;



while (kakica)
{
    cout << "Welcome to RuneScape In Console App... Play? (y/n)" << endl;
    string playrs;
    cin >> playrs;

    if (playrs == "n")
    {
        cout << "Goodbye!" << endl;
        kakica = false;
        continue;
    }
if (playrs == "y")
{



    cout << "-------------------" << endl;
    cout << "Are you gonna skill or quest (s/q) or do other things....(o)" << endl;

    cin >> skillorquest;

        if(skillorquest == "s")
        {

            cout << "What skill are you gonna level up?" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Attack (a)" << endl;
            cout << "Mining (m)" << endl;
            cout << "Woodcutting (w)" << endl;
            cout << "Magic (mg)" << endl;
            cout << "Firemaking (fm)" << endl;
            cout << "Fishing (fsh)" << endl;
            cout << "Cooking (cg)" << endl;

            cin >> skill;
            if(skill == "a")
            {
                cout << "Leveling up attack..." << endl;
            }
            else if(skill == "m")
            {
                cout << "Leveling mining..." << endl;
            }
            else if(skill == "w")
            {
                cout << "Your current woodcutting level is "<< woodcuttinglvl<< endl;
                cout << "Normal Trees 25xp | Level 1 required (nt)" << endl;
                cout << "Oak Trees 70xp | Level 15 required (ot)" << endl;
                cout << "Willow Trees 135xp | Level 30 required (wt)"<< endl;
                cout << "Maple Trees 225xp  | Level 45 required (mt)"<< endl;
                cout << "Yew Trees 350xp | Level 60 required (yt)"<< endl;
                cin >> tree;
                if (tree == "nt")
                {
                    cout << "Cutting... "<< endl;
                    cout << "Normal Tree Chopped Down! +25 xp "<<  endl;
                    woodcuttingxp += 25;
                    woodcuttinglvl = 1.00+woodcuttingxp/100.00;
                    cout << "Your current woodcutting Experience is "<< woodcuttingxp<< endl;
                    cout << "Your current woodcutting level is "<< woodcuttinglvl<< endl;
                }
                if (tree == "ot")
                {
                    cout << "Cutting... "<< endl;
                    if(woodcuttinglvl >=15)
                    {
                    cout << "Normal Tree Chopped Down! +75 xp "<<  endl;
                    woodcuttingxp += 75;
                    woodcuttinglvl = 1.00+woodcuttingxp/100.00;
                    cout << "Your current woodcutting Experience is "<< woodcuttingxp<< endl;
                    cout << "Your current woodcutting level is "<< woodcuttinglvl<< endl;
                    }
                    else if(woodcuttinglvl <15)
                    {
                    cout << "Level not high enough! "<<  endl;

                    }

                }



            }
            else if(skill == "mg")
            {
                cout << "Current Magic level is " << magiclvl << "."  << endl;
                cout << "How would you like to level up magic?" << endl;
                cout << "Combat (cb)  (will take you to fight monsters)" << endl;
                cout << "Enchanting jewelry (ej) (work in progress not fully done yet)" << endl;
                cout << "Casting other spells (cs)" << endl;
                cout << "More coming soon..." << endl;
                cin >> mgtrain;
                if(mgtrain == "cb")
                {
                    cout << "Goblins (Level 2 Enemy) 50xp per kill (gb)"<< endl;
                    cout << "Cows (Level 5 Enemy) 75xp per kill (cw)" << endl;
                    cout << "Wizards (Level 9 Enemy) 120xp per kill (wz)" << endl;
                    cout << "Skeletons (Level 13 Enemy)  200xp per kill (sk) " << endl;
                    cout << "Giants (Level 23 Enemy) 350xp per kill (gt)" << endl;
                    cout << "Moss giants (Level 35 enemy) 500xp per kill (msg)" << endl;
                    cout << "More coming soon..." << endl;
                    cin >> mgcb;
                    if(mgcb == "gb")
                    {
                        cout << "With what combat spell will you fight?" << endl;
                        cout << "Wind Strike - 1 Air rune and 1 Mind rune | Lvl 1 required (ws) 5 casts"  << endl;
                        cout << "Water Strike - 1 Air rune, 1 Water rune and 1 Mind rune | Lvl 5 required (wts) 4 casts"  << endl;
                        cout << "Earth Strike - 1 Air rune, 2 Earth runes and 1 Mind rune | Lvl 9 required (es) 3 casts"  << endl;
                        cout << "Fire Strike - 2 Air runes, 3 Fire runes and 1 Mind rune | Lvl 13 required (fs) 2 casts"  << endl;
                        cout << "Wind bolt - 2 Air runes and 1 Chaos rune | Lvl 17 required (coming soon!)"  << endl;
                        cin >> cbspell;
                        if(cbspell == "ws")
                        {
                                cout << "Casting..."  << endl;
                                if (airrunes >= 5 && mindrunes >= 5 && magiclvl >= 1)
                                {
                                    cout << "Goblin killed! +50 Magic XP"  << endl;
                                    airrunes -= 5;
                                    mindrunes -=5;
                                    magicxp += 50;
                                    magiclvl = magicxp / 100 + 1;
                                    cout << "Current magic xp is "  << magicxp << "." << endl;
                                    cout << "Current magic level is "  << magiclvl << "." << endl;
                                }
                                else if(airrunes <5 && mindrunes < 5)
                                {
                                    cout << "Not Enough Runes!"  << endl;
                                }
                                else if (magiclvl < 1)
                                {
                                    cout << "Level not high enough!"  << endl;
                                }
                                else if(airrunes < 5 && mindrunes<5 && magiclvl <1 )
                                {
                                    cout << "Not Enough runes and not high enough level!"  << endl;
                                }

                        }
                        if(cbspell == "wts")
                        {
                                cout << "Casting..."  << endl;
                                if (airrunes >= 4 && mindrunes >= 4 && magiclvl >= 5 && waterrunes >= 4)
                                {
                                    cout << "Goblin killed! +50 Magic XP"  << endl;
                                    airrunes -= 4;
                                    mindrunes -=4;
                                    waterrunes -= 4;
                                    magicxp += 50;
                                    magiclvl = magicxp / 100 + 1;
                                    cout << "Current magic xp is "  << magicxp << "." << endl;
                                    cout << "Current magic level is "  << magiclvl << "." << endl;
                                }
                                else if(airrunes <4 && mindrunes < 4 && waterrunes <4)
                                {
                                    cout << "Not Enough Runes!"  << endl;
                                }
                                else if (magiclvl < 5)
                                {
                                    cout << "Level not high enough!"  << endl;
                                }
                                else if(airrunes < 4 && mindrunes<4 && magiclvl <5 )
                                {
                                    cout << "Not Enough runes and not high enough level!"  << endl;
                                }

                        }
                        if(cbspell == "es")
                        {
                                cout << "Casting..."  << endl;
                                if (airrunes >= 3 && mindrunes >= 3 && magiclvl >= 9 && earthrunes >= 6)
                                {
                                    cout << "Goblin killed! +50 Magic XP"  << endl;
                                    airrunes -= 3;
                                    mindrunes -=3;
                                    earthrunes -= 6;
                                    magicxp += 50;
                                    magiclvl = magicxp / 100 + 1;
                                    cout << "Current magic xp is "  << magicxp << "." << endl;
                                    cout << "Current magic level is "  << magiclvl << "." << endl;
                                }
                                else if(earthrunes <6 && mindrunes < 3 && airrunes <3)
                                {
                                    cout << "Not Enough Runes!"  << endl;
                                }
                                else if (magiclvl < 9)
                                {
                                    cout << "Level not high enough!"  << endl;
                                }
                        }
                        if(cbspell == "fs")
                        {
                                cout << "Casting..."  << endl;
                                if (airrunes >= 4 && firerunes >= 6 && magiclvl >= 13 && mindrunes >= 2)
                                {
                                    cout << "Goblin killed! +50 Magic XP"  << endl;
                                    airrunes -= 4;
                                    mindrunes -=2;
                                    firerunes -= 6;
                                    magicxp += 50;
                                    magiclvl = magicxp / 100 + 1;
                                    cout << "Current magic xp is "  << magicxp << "." << endl;
                                    cout << "Current magic level is "  << magiclvl << "." << endl;
                                }
                                else if(firerunes <6 && mindrunes < 2 && airrunes <4)
                                {
                                    cout << "Not Enough Runes!"  << endl;
                                }
                                else if (magiclvl < 13)
                                {
                                    cout << "Level not high enough!"  << endl;
                                }
                        }
                    }
                }


            }
            else if(skill == "fm")
            {
                cout << "" << endl;
            }
            else if (skill == "fsh")
            {
                cout << "fsh" << endl;
            }

        }
        else if(skillorquest == "q")
        {
                cout << "What quest are you going to do?" << endl;
                cout << "Cook's Assistant (ca) 1 quest point" << endl;
                cout << "Prince Ali Rescue (pa) 3 quest points" << endl;
                cout << "Romeo and Juliet (rj) 5 quest points" << endl;
                cin >> quest;
                if(quest == "ca")
                {
                    cout << "Cook's assistant Complete! 1 quest point awarded. " << endl;

                }
                else if(quest == "pa")
                {
                    cout << "Prince Ali Rescue Complete! 3 quest points awarded. "<< endl;

                }
                else if(quest == "rj")
                {
                    cout << "Romeo and Juliet Complete! 5 quest points awarded. " << endl;


                }

        }
        else if (skillorquest == "o")
        {
            cout << "Grand Exchange (ge)"  << endl;
            cout << "Bossing (bs)"  << endl;
            cout << "Item List (lt)"  << endl;
            cout << "Spellbook (sb)"  << endl;
            cout << "Credits (cr)"  << endl;
            cout << "Gold balance (gp)"  << endl;
            cout << "Inventory (inv)"  << endl;
            cout << "More coming soon.."  << endl;
            cin >> other;
            if(other == "ge")
            {
                cout << "Welcome to the Grand Exchange! Would you like to buy or sell? (b/s)"  << endl;
                cin >> buysell;
                if (buysell == "b")
                {
                    cout << "Type to search for items... (you can find items in the list section and their listed prices)" << endl;
                    cin >> src;
                    if (src == "Bronze sword")
                    {
                        cout << "Searching..." << endl;
                        if (gp <50)
                        {
                            cout << "Not Enough gold!" << endl;
                        }
                        if (gp > 50)
                        {
                            cout << "Purchase Sucessfull! Item added to inventory.";
                            swordequip = "Bronze sword";
                            inv++;
                        }
                        if (inv >= 30)
                        {
                            cout << "Not enough inventory space!"  << endl;
                        }

                    }

                }
                else if(buysell == "s")
                {
                    cout << "Choose an item from your inventory to sell."  << endl;
                }
            }
            else if(other == "bs")
            {
                cout << "Elvarg (Dragon Slayer I required) (ev) Level 83 boss"  << endl;
                cout << "Obor (Combat level of 60 required) (ob) Level 106 boss "  << endl;
                cout << "Bryophyta (Combat Level of 70 required) Level 128 boss"  << endl;
                cout << "Amoxliatl (Combat Level of 99 required) Level 263 boss"  << endl;
                cout << "Royal Titans (Combat Level of 200 required) Level 350 boss"  << endl;
                cout << "Doom of Mokhaiotl (Combat Level of 400 required) Level 558 boss"  << endl;
                cout << "Zulrah (Combat Level of 600 required) Level 725 boss"  << endl;
                cout << "Vorkath (Combat Level of 625 required and Dragon Slayer II) Level 738 boss"  << endl;
                cout << "Yama (Combat Level of 1000 required and Dragon Slayer II) Level 1423 boss"  << endl;
                cout << "Sol Heredit (Combat Level of 1100 required and Dragon Slayer II) Level 1563 boss"  << endl;
                cout<< "The Combination (Combat Level of 5000 required and Dragon Slayer II) Level 9999 boss"  << endl;







            }
            else if (other == "lt")
            {
                cout << "Full item list + Prices (buy them on the Grand Exchange)"  << endl;
                cout << "----------------------"  << endl;
                cout << "----Swords----"  << endl;
                cout << "Bronze sword 50gp" << endl;
                cout << "Iron sword 100gp"  << endl;
                cout << "Steel sword 175gp"  << endl;
                cout << "Black sword 400gp"  << endl;
                cout << "Mithril sword 2500gp"  << endl;
                cout << "Adamant sword 6000gp"  << endl;
                cout << "Rune sword 25000gp"  << endl;
                cout << "Dragon Sword 100000gp"  << endl;
                cout << "----Armour----(Full sets)"  << endl;
                cout << "Bronze armour 250gp"  << endl;
                cout << "Iron armour 500gp"  << endl;
                cout << "Steel armour 850gp"  << endl;
                cout << "Black armour 2000gp"  << endl;
                cout << "Mithril armour 12000gp"  << endl;
                cout << "Adamant armour 30000gp"  << endl;
                cout << "Rune armour 75000gp"  << endl;
                cout << "Dragon Armour 300000gp"  << endl;
                cout << "----Axes----"  << endl;
                cout << "Bronze axe 25gp"  << endl;
                cout << "Iron axe 50gp"  << endl;
                cout << "Steel axe 75gp"  << endl;
                cout << "Black axe 200gp"  << endl;
                cout << "Mithril axe 1250gp"  << endl;
                cout << "Adamant axe 3000gp"  << endl;
                cout << "Rune axe 12500gp"  << endl;
                cout << "Dragon axe 50000gp"  << endl;
                cout << "----Pickaxes----"  << endl;
                cout << "Bronze Pickaxe 25gp"  << endl;
                cout << "Iron Pickaxe 50gp"  << endl;
                cout << "Steel Pickaxe 75gp"  << endl;
                cout << "Black Pickaxe 200gp"  << endl;
                cout << "Mithril Pickaxe 1250gp"  << endl;
                cout << "Adamant Pickaxe 3000gp"  << endl;
                cout << "Rune Pickaxe 12500gp"  << endl;
                cout << "Dragon Pickaxe 50000gp"  << endl;
                cout << "----Food----"  << endl;
                cout << "Bread 4gp"  << endl;
                cout << "Shrimp 15gp"  << endl;
                cout << "Salmon 30gp"  << endl;
                cout << "Lobster 60gp"  << endl;
                cout << "----Potions----"  << endl;
                cout << "Stamina potion 150gp"  << endl;
                cout << "Health potion 150gp"  << endl;
                cout << "Combat potion 300gp"  << endl;
                cout << "Magic potion 300gp"  << endl;
                cout << "Mixed Potion 750gp"  << endl;
                cout << "----Magic Items----"  << endl;
                cout << "Staff of air 1250gp"  << endl;
                cout << "Staff of water 1250gp"  << endl;
                cout << "Staff of earth 1250gp"  << endl;
                cout << "Staff of fire 1250gp"  << endl;
                cout << "Air rune 2gp"  << endl;
                cout << "Water rune 2gp"  << endl;
                cout << "Earth rune 2gp"  << endl;
                cout << "Fire rune 2gp"  << endl;
                cout << "Mind rune 2gp"  << endl;
                cout << "Body rune 3gp"  << endl;
                cout << "Chaos rune 4gp"  << endl;
                cout << "Nature rune 3gp"  << endl;
                cout << "Nature rune 3gp"  << endl;
                cout << "Nature rune 3gp"  << endl;
                cout << "Nature rune 3gp"  << endl;
                cout << "Nature rune 3gp"  << endl;

                cout << "More items coming soon....."  << endl;










            }
            else if(other == "sb")
            {
                cout << "Lumbridge Home Teleport - requires no runes, recharges in 30 mins | Lvl 1 required"  << endl;
                cout << "Wind Strike - 1 Air rune and 1 Mind rune | Lvl 1 required"  << endl;
                cout << "Confuse - 2 Earth runes, 3 Water runes and 1 Body rune | Lvl 3 required"  << endl;
                cout << "Water Strike - 1 Air rune, 1 Water rune and 1 Mind rune | Lvl 5 required"  << endl;
                cout << "Earth Strike - 1 Air rune, 2 Earth runes and 1 Mind rune | Lvl 9 required"  << endl;
                cout << "Weaken - 2 Earth runes, 3 Water runes and 1 Body rune | Lvl 11 required"  << endl;
                cout << "Fire Strike - 2 Air runes, 3 Fire runes and 1 Mind rune | Lvl 13 required"  << endl;
                cout << "Bones to Bananas - 2 earth runes, 2 Water runes and 1 Nature rune | Lvl 15 required"  << endl;
                cout << "Wind bolt - 2 Air runes and 1 Chaos rune | Lvl 17 required"  << endl;
                cout << "Curse - 3 Earth runes, 2 Water runes and 1 Body rune | Lvl 19 required"  << endl;
                cout << "Bind - 3 Earth runes, 3 Water runes and 2 Nature runes | Lvl 20 required"  << endl;
                cout << "Low Level Alchemy - 3 Fire runes and 1 Nature rune | Lvl 21 required"  << endl;
                cout << "More Spells coming soon..."  << endl;

            }

            else if (other == "gp")
            {
                cout << "You have " << gp  << " gold." << endl;
            }
            else if (other ==  "inv")
            {
                cout << "Air runes: " << airrunes  << endl;
                cout << "Water runes: " << waterrunes  << endl;
                cout << "Mind runes: " << mindrunes  << endl;
                cout << "Current Sword: " << swordequip  << endl;

            }
            else if (other == "cr")
            cout << "Made by @vxy5 (on discord) Original RuneScape by Jagex Ltd. Donate for more games!"  << endl;

        }
}
}
return 0;
}









