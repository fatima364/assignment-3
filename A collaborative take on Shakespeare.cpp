//william Shakespeare's As You Like It
//All The World's A Stage
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Stage
{
public:
	void ActorsNActresses()
	{
		while (life == "entrance")
		{
			act = "play_many_parts";
			break;
		}
		for (int age = 0; age < 7; age++)
		{
			while (age == 1)
			{
				act = "infant";
				part = "mewling_puking";
				part = "in_nurses_arms";
				break;
			}
			while (age == 2)
			{
				act = "whinning_schoolboy_with_satchel";
				part = "creeping_like_snail";
				part = "unwillingly_to_school";
				break;
			}
			while (age == 3)
			{
				act = "the_lover";
				part = "sighing_like_furnace";
				part = "made_to_mistress_eyebrow";
				break;
			}
			while (age == 4)
			{
				act = "beardes_soldier_with_strange_oaths";
				part = "jealous";
				part = "quick_in_quarrel";
				part = "seeking_bubble_reputation";
				part = "even_in_canons_mouth";
				break;
			}
			while (age == 5)
			{
				act = "the_justice";
				act = "In_fair_round_belly";
				act = "with_good_capon_lined";
				act = "with_eyes_severe";
				act = "beard_of_formal_cut";
				part = "wise_saws";
				part = "modern_intances";
				part = "plays_his_part";
				break;
			}
			while (age == 6)
			{
				act = "lean_slippered_pantaloon";
				act = "with_spectacles_on_nose";
				act = "Pouch_on_side";
				act = "youthful_hose_well_saved_";
				act = "a_world_too_wide";
				act = "for_his_shrunkshank";
				act = "and_his_big_manly_voice";
				part = "turning_again_toward_childish_treble";
				part = "pipes_and_whistles_in_his_sound";
				break;
			}
			while (age == 7)
			{
				act = "last_seen_of_all";
				act = "ends_this_strange_eventful_history";
				act = "second_childishness";
				act = "mere_oblivion";
				part = "sans_teeth";
				part = "sans_eyes";
				part = "sans_taste";
				part = "sans_everything";
				break;
			}
			exit(0);
		}
	}
private:
	string act, age, part, life="entrance";
};

int main()
{
	Stage AllTheWorld;
	AllTheWorld.ActorsNActresses();
	return 0;
}