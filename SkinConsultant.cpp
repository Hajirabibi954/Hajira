#include <iostream>
#include <string>
#include <map>


using namespace std;

enum SkinType { Dry, Oily, Acne, Hyperpigmentation, AcquiredDry };

class SkinDisease
{
public:

    SkinDisease(SkinType type) : type(type) {}
    virtual void displayThingsToAvoid() = 0;
    virtual void displayThingsToFollow() = 0;
    virtual void displayProducts() = 0;
    virtual void displayIngredients() = 0;
    virtual void displayDayRoutine() = 0;
    virtual void displayNightRoutine() = 0;

protected:
    SkinType type;
};


class DrySkin : public SkinDisease
{
public:
    DrySkin() : SkinDisease(Dry)
    {
        thingsToAvoid["Long, hot showers"] = "They can strip your skin of its natural oils.";
        thingsToAvoid["Harsh soaps"] = "They can dry out your skin.";
        thingsToAvoid["Fragrant products"] = "They can irritate your skin.";
        thingsToAvoid["Wool or rough fabrics"] = "They can irritate your skin.";
        thingsToAvoid["Central heating or air conditioning"] = "They can dry out your skin.";

        thingsToFollow["Moisturize"] = "Moisturizing helps to keep your skin hydrated.";
        thingsToFollow["Use a humidifier"] = "Humidifiers add moisture to the air, which can help prevent your skin from drying out.";
        thingsToFollow["Use gentle detergents"] = "They protect your skin's natural barrier and prevent irritation.";
        thingsToFollow["Use hydrating products"] = "Your skin needs hydration to overcome dryness.";
        thingsToFollow["Pat your skin dry"] = "Rubbing your skin with a towel can irritate it.";
        thingsToFollow["Wear gloves"] = "Protect your hands from cold, dry air.";

        products["Aveeno "] = "They can strip your skin of its natural oils.";
        products["Cerave"] = "They can dry out your skin.";
        products["Fragrant products"] = "They can irritate your skin.";
        products["Alcohol-based products"] = "They can dry out your skin.";

        ingredients["Moisturizing ingredients"] = "Look for ingredients like glycerin, hyaluronic acid, and ceramides.";
        ingredients["Gentle cleansers"] = "Choose cleansers that are fragrance-free and gentle on your skin.";
        ingredients["Natural oils"] = "Oils like jojoba, coconut, and almond can moisturize your skin.";
        ingredients["Hylarounic Acid"] = "Hylarounic acid really heps to hydrate the skin.";

        dayroutine["Cleanser"] = "Use a gentle cleanser to wash your face.";
        dayroutine["Toner"] = "Use any hydrating toner or thermal spring water.";
        dayroutine["Hydrating Serum"] = "Select any suitble serum according to your liking.";
        dayroutine["Moisturize"] = "Apply a moisturizer to your face and body.";
        dayroutine["Protect"] = "Wear sunscreen to protect your skin from the sun.";

        nightroutine["Cleanse"] = "Remove your makeup and cleanse your face.";
        nightroutine["Toner"] = "Use any hydrating toner or thermal spring water.";
        nightroutine["Hydrating Serum"] = "Select any suitble serum according to your liking.";
        nightroutine["Moisturize"] = "Apply a heavier moisturizer to your face and body.";
        nightroutine["Apply a sleeping mask"] = "A sleeping mask can provide extra hydration while you sleep.";
    }

    void displayThingsToAvoid() override
    {
        printThings("AVOID", thingsToAvoid);
    }

    void displayThingsToFollow() override
    {
        printThings("FOLLOW", thingsToFollow);
    }

    void displayProducts() override
    {
        printThings("PRODUCTS", products);
    }

    void displayIngredients() override
    {
        printThings("INGREDIENTS", ingredients);
    }

    void displayDayRoutine() override
    {
        printThings("DAY ROUTINE", dayroutine);
    }

    void displayNightRoutine() override
    {
        printThings("NIGHT ROUTINE", nightroutine);
    }

private:
    map<string, string> thingsToAvoid;
    map<string, string> thingsToFollow;
    map<string, string> products;
    map<string, string> ingredients;
    map<string, string> dayroutine;
    map<string, string> nightroutine;

    void printThings(const string& type, const map<string, string>& things)
    {
        cout << "== " << type << " ==" << endl;
        for (const auto& pair : things)
        {
            cout << "   " << pair.first << ": " << pair.second << endl;
        }
    }
};


class OilySkin : public SkinDisease
{
public:
    OilySkin() : SkinDisease(Oily)
    {

        thingsToAvoid["Over-washing"] = "Over-washing can stimulate your skin to produce more oil.";
        thingsToAvoid["Heavy, oily cosmetics"] = "They can clog your pores and lead to breakouts.";
        thingsToAvoid["Oily foods"] = "Oily foods can increase oilyness.";
        thingsToAvoid["Coconut Oil"] = "Coconut oil can clog your pores so it's better to avoid.";
        thingsToAvoid["Long, hot showers"] = "They can strip your skin of its natural oils.";
        thingsToAvoid["Harsh soaps"] = "They can dry out your skin.";
        thingsToAvoid["Fragrant products"] = "They can irritate your skin";
        thingsToAvoid["Active chemicals "] = "They can irritate your skin and damage skin barrier.";


        thingsToFollow["Use oil-free products"] = "They can help control shine and prevent breakouts.";
        thingsToFollow["Exfoliate"] = "Exfoliating can help remove dead skin cells and unclog pores.";
        thingsToFollow["Use Aloe vera based products"] = "Aloevera is really helpful for oily skin.";
        thingsToFollow["Tea tree oil"] = "It balances oil production.";
        thingsToFollow["Moisturize"] = "Moisturizing helps to keep your skin hydrated.";
        thingsToFollow["Use gentle detergents"] = "They protect your skin's natural barrier and prevent irritation.";
        thingsToFollow["Use hydrating products"] = "Your skin needs hydration to overcome dryness.";


        products["Gentle cleansers"] = "They can help control oil production and prevent breakouts.";
        products["Oil-free moisturizers"] = "They can help keep your skin hydrated without clogging pores.";
        products["Aloe vera based products"] = "Aloevera is really helpful for oily skin.";
        products["Tea tree oil products"] = "It balances oil production and can help prevent breakouts.";


        ingredients["Salicylic acid"] = "It can help exfoliate the skin and unclog pores.";
        ingredients["Glycolic acid"] = "It can help remove dead skin cells and prevent breakouts.";
        ingredients["Hyaluronic acid"] = "It can help keep your skin hydrated and plump.";
        ingredients["Niacinamide"] = "It can help improve skin elasticity and reduce inflammation.";


        dayroutine["Wash your face with a gentle cleanser"] = "It can help control oil production and prevent breakouts.";
        dayroutine["Apply an oil-free moisturizer"] = "It can help keep your skin hydrated without clogging pores.";
        dayroutine["Use a lightweight, oil-free sunscreen"] = "It can help protect your skin from the sun without clogging pores.";
        dayroutine["Exfoliate once or twice a week"] = "It can help remove dead skin cells and unclog pores.";


        nightroutine["Wash your face with a gentle cleanser"] = "It can help control oil production and prevent breakouts.";
        nightroutine["Apply a spot treatment to any breakouts"] = "It can help reduce inflammation and prevent scarring.";
        nightroutine["Use a lightweight, oil-free moisturizer"] = "It can help keep your skin hydrated without clogging pores.";
        nightroutine["Get enough sleep"] = "It can help reduce stress and prevent breakouts.";

    }

    void displayThingsToAvoid() override
    {
        printThings("AVOID", thingsToAvoid);
    }

    void displayThingsToFollow() override
    {
        printThings("FOLLOW", thingsToFollow);
    }

    void displayProducts() override
    {
        printThings("Products", products);
    }

    void displayIngredients() override
    {
        printThings("Ingredients", ingredients);
    }

    void displayDayRoutine() override
    {
        printThings("Daytime Routine", dayroutine);
    }

    void displayNightRoutine() override
    {
        printThings("Night-time Routine", nightroutine);
    }

private:
    map<string, string> thingsToAvoid;
    map<string, string> thingsToFollow;
    map<string, string> products;
    map<string, string> ingredients;
    map<string, string> dayroutine;
    map<string, string> nightroutine;

    void printThings(const string& label, const map<string, string>& things)
    {
        cout << "Here are some " << label << " for oily skin:\n";
        for (const auto& item : things)
        {
            cout << "- " << item.first << ": " << item.second << "\n";
        }
    }

};


class AcneSkin : public SkinDisease
{
public:
    AcneSkin() : SkinDisease(Acne)
    {
        thingsToAvoid["Dirty Pillowcase"] = "They can increase the bacteria growth .";
        thingsToAvoid["Harsh soaps"] = "They can dry out your skin.";
        thingsToAvoid["Over-washing"] = "Over-washing can stimulate your skin to produce more oil.";
        thingsToAvoid["Heavy, oily cosmetics"] = "They can clog your pores and lead to breakouts.";
        thingsToAvoid["Oily foods"] = "Oily foods can increase oilyness.";
        thingsToAvoid["Coconut Oil"] = "Coconut oil can clog your pores so it's better to avoid.";
        thingsToAvoid["Dirty Mobilephones"] = "Mobilephones are usually in contact with our skin while we are on call and dirty mobile phones can  cause acne.";
        thingsToAvoid["Heavy Oils"] = "Heavy oils like Coconut oil can clog your pores so it's better to avoid.";
        thingsToAvoid["Popping or squeezing pimples"] = "This can lead to scarring and infection.";
        thingsToAvoid["Touching your face frequently"] = "This can spread bacteria and cause new pimples.";
        thingsToAvoid["Using heavy, pore-clogging products"] = "These can exacerbate acne.";
        thingsToAvoid["Not cleaning your makeup brushes regularly"] = "This can lead to buildup of bacteria and skin oils.";

        thingsToFollow["Use oil-free, non-comedogenic products"] = "They are specifically designed for acne-prone skin.";
        thingsToFollow["Cleanse your face twice a day"] = "This helps remove excess oil and impurities.";
        thingsToFollow["Exfoliate regularly"] = "This helps remove dead skin cells and prevent clogged pores.";
        thingsToFollow["Use salicylic acid or benzoyl peroxide"] = "These ingredients can help fight acne.";

        products["Clay masks"] = "They cleanse the pores and make skin clear.";
        products["Charcoal based products"] = "Charcoal is really good for acne.";
        products["Pimple patches"] = "Pimple patches soak all the dirt and substance from acne and help in healing.";
        products["Detoxifing drinks"] = "Mostly acne is due to toxins in our body so its important to detoxify the body as well.";

        ingredients["Tea tree oil"] = "It has antibacterial properties that can help fight acne.";
        ingredients["Green tea extract"] = "It has anti-inflammatory properties that can help soothe acne.";
        ingredients["Niacinamide"] = "It can help regulate oil production and improve skin texture.";
        ingredients["Hyaluronic acid"] = "It provides hydration without clogging pores.";

        dayroutine["Wear sunscreen"] = "This protects your skin from harmful UV rays, which can make acne worse.";
        dayroutine["Avoid heavy makeup"] = "This can clog pores and exacerbate acne.";
        dayroutine["Clean your phone regularly"] = "Your phone can harbor bacteria, which can cause acne.";
        dayroutine["Stay hydrated"] = "Drinking plenty of water can help maintain your skin's health.";

        nightroutine["Remove makeup before bed"] = "This prevents buildup of bacteria and skin oils.";
        nightroutine["Use a retinoid"] = "Retinoids can help unclog pores and reduce acne.";
        nightroutine["Apply a spot treatment"] = "This can help target individual pimples.";
        nightroutine["Get enough sleep"] = "Lack of sleep can contribute to stress, which can make acne worse.";

    }

    void displayThingsToAvoid() override
    {
        printThings("AVOID", thingsToAvoid);
    }

    void displayThingsToFollow() override
    {
        printThings("FOLLOW", thingsToFollow);
    }

    void displayProducts() override
    {
        printThings("Products", products);
    }

    void displayIngredients() override
    {
        printThings("Ingredients", ingredients);
    }

    void displayDayRoutine() override
    {
        printThings("Daytime Routine", dayroutine);
    }

    void displayNightRoutine() override
    {
        printThings("Night-time Routine", nightroutine);
    }

private:
    map<string, string> thingsToAvoid;
    map<string, string> thingsToFollow;
    map<string, string> products;
    map<string, string> ingredients;
    map<string, string> dayroutine;
    map<string, string> nightroutine;

    void printThings(const string& label, const map<string, string>& things)
    {
        cout << "Here are some " << label << " for acne prone skin:\n";
        for (const auto& item : things)
        {
            cout << "- " << item.first << ": " << item.second << "\n";
        }
    }

};



class HyperpigmentationSkin : public SkinDisease
{
public:
    HyperpigmentationSkin() : SkinDisease(Hyperpigmentation)
    {

        thingsToFollow["Sun protection"] = "Sun protection is crucial for preventing further darkening of hyperpigmented skin.";
        thingsToFollow["Vitamin C"] = "Vitamin C can help lighten hyperpigmentation and boost collagen production.";
        thingsToFollow["Retinoids"] = "Retinoids promote cell turnover and can help fade hyperpigmentation.";
        thingsToFollow["Niacinamide"] = "Niacinamide can help reduce hyperpigmentation and protect the skin from sun damage.";

        thingsToAvoid["Sunbathing"] = "Sunbathing can worsen hyperpigmentation and lead to new spots.";
        thingsToAvoid["Picking at spots"] = "Picking at spots can cause inflammation and darken the skin.";
        thingsToAvoid["Harsh skincare products"] = "Harsh products can cause irritation and worsen hyperpigmentation.";
        thingsToAvoid["Waxing"] = "Waxing can cause skin inflammation and darken the skin.";

        products["Hydroquinone"] = "Hydroquinone is a skin-lightening agent that can help reduce hyperpigmentation.";
        products["Azelaic acid"] = "Azelaic acid has anti-inflammatory and skin-lightening properties.";
        products["Kojic acid"] = "Kojic acid is a natural skin-lightening agent that can help reduce hyperpigmentation.";
        products["Vitamin C serum"] = "Vitamin C serum can help lighten hyperpigmentation and boost collagen production.";

        ingredients["Moisturize"] = "Moisturizing helps to keep your skin hydrated and healthy.";
        ingredients["Use a gentle cleanser"] = "A gentle cleanser can help remove dirt and impurities without irritating the skin.";
        ingredients["Use soothing ingredients"] = "Soothing ingredients like aloe vera and chamomile can help reduce inflammation and calm the skin.";
        ingredients["Use antioxidants"] = "Antioxidants like vitamin E and ferulic acid can help protect the skin from damage and reduce hyperpigmentation.";

        dayroutine["Cleanse your face"] = "Cleanse your face with a gentle cleanser to remove dirt and impurities.";
        dayroutine["Apply sunscreen"] = "Apply sunscreen with at least SPF 30 to protect your skin from the sun.";
        dayroutine["Use a vitamin C serum"] = "Use a vitamin C serum to help lighten hyperpigmentation and boost collagen production.";
        dayroutine["Moisturize"] = "Moisturize to keep your skin hydrated and healthy.";

        nightroutine["Cleanse your face"] = "Cleanse your face with a gentle cleanser to remove dirt and impurities.";
        nightroutine["Apply a retinoid"] = "Apply a retinoid to promote cell turnover and fade hyperpigmentation.";
        nightroutine["Use a soothing ingredient"] = "Use a soothing ingredient like aloe vera to reduce inflammation and calm the skin.";
        nightroutine["Moisturize"] = "Moisturize to keep your skin hydrated and healthy.";



    }

    void displayThingsToAvoid() override
    {
        printThings("AVOID", thingsToAvoid);
    }

    void displayThingsToFollow() override
    {
        printThings("FOLLOW", thingsToFollow);
    }

    void displayProducts() override
    {
        printThings("Products", products);
    }

    void displayIngredients() override
    {
        printThings("Ingredients", ingredients);
    }

    void displayDayRoutine() override
    {
        printThings("Daytime Routine", dayroutine);
    }

    void displayNightRoutine() override
    {
        printThings("Night-time Routine", nightroutine);
    }

private:
    map<string, string> thingsToAvoid;
    map<string, string> thingsToFollow;
    map<string, string> products;
    map<string, string> ingredients;
    map<string, string> dayroutine;
    map<string, string> nightroutine;

    void printThings(const string& label, const map<string, string>& things)
    {
        cout << "Here are some " << label << " for hyperpigmentation:\n";
        for (const auto& item : things)
        {
            cout << "- " << item.first << ": " << item.second << "\n";
        }
    }

};



class AcquiredDrySkin : public SkinDisease
{
public:
    AcquiredDrySkin() : SkinDisease(AcquiredDry)
    {
        // Diabetes Skin Care Recommendations

// Things to Avoid

        thingsToAvoid["High sugar intake"] = "High sugar intake can lead to skin issues in diabetes patients.";
        thingsToAvoid["Tight clothing"] = "Tight clothing can cause skin irritation and fungal infections.";
        thingsToAvoid["Poor wound care"] = "Poor wound care can lead to infections and slow healing.";
        thingsToAvoid["Smoking"] = "Smoking can reduce blood flow to the skin, leading to skin problems.";

// Things to Follow
        thingsToFollow["Monitor blood sugar levels"] = "Monitoring blood sugar levels can help prevent skin issues.";
        thingsToFollow["Keep skin moisturized"] = "Moisturizing can help prevent dry skin and skin cracks.";
        thingsToFollow["Wear breathable clothing"] = "Wearing breathable clothing can help prevent skin irritation.";
        thingsToFollow["Get regular exercise"] = "Regular exercise can improve blood flow and overall health.";

// Product Recommendations
        products["Moisturizing creams"] = "Moisturizing creams can help keep skin hydrated and healthy.";
        products["Antifungal creams"] = "Antifungal creams can help prevent fungal infections.";
        products["Wound care products"] = "Wound care products can help promote healing and prevent infections.";
        products["Gentle cleansers"] = "Gentle cleansers can help prevent skin irritation.";

// Ingredient Recommendations

        ingredients["Aloe vera"] = "Aloe vera can help soothe and moisturize the skin.";
        ingredients["Tea tree oil"] = "Tea tree oil has antifungal and antibacterial properties.";
        ingredients["Vitamin E"] = "Vitamin E can help promote skin health and wound healing.";
        ingredients["Hyaluronic acid"] = "Hyaluronic acid can help lock in moisture and promote skin hydration.";

        dayroutine["Wash skin with gentle cleanser"] = "Washing skin with a gentle cleanser can help prevent skin irritation.";
        dayroutine["Apply moisturizer"] = "Applying moisturizer can help keep skin hydrated and healthy.";
        dayroutine["Wear breathable clothing"] = "Wearing breathable clothing can help prevent skin irritation.";
        dayroutine["Monitor blood sugar levels"] = "Monitoring blood sugar levels can help prevent skin issues.";


        nightroutine["Wash skin with gentle cleanser"] = "Washing skin with a gentle cleanser can help prevent skin irritation.";
        nightroutine["Apply moisturizer"] = "Applying moisturizer can help keep skin hydrated and healthy.";
        nightroutine["Wear loose, comfortable clothing"] = "Wearing loose, comfortable clothing can help prevent skin irritation.";
        nightroutine["Get adequate sleep"] = "Getting adequate sleep can help promote overall health and skin health.";




    }

    void displayThingsToAvoid() override
    {
        printThings("AVOID", thingsToAvoid);
    }

    void displayThingsToFollow() override
    {
        printThings("FOLLOW", thingsToFollow);
    }

    void displayProducts() override
    {
        printThings("Products", products);
    }

    void displayIngredients() override
    {
        printThings("Ingredients", ingredients);
    }

    void displayDayRoutine() override
    {
        printThings("Daytime Routine", dayroutine);
    }

    void displayNightRoutine() override
    {
        printThings("Night-time Routine", nightroutine);
    }

private:
    map<string, string> thingsToAvoid;
    map<string, string> thingsToFollow;
    map<string, string> products;
    map<string, string> ingredients;
    map<string, string> dayroutine;
    map<string, string> nightroutine;

    void printThings(const string& label, const map<string, string>& things)
    {
        cout << "Here are some " << label << " for diabetes skin:\n";
        for (const auto& item : things)
        {
            cout << "- " << item.first << ": " << item.second << "\n";
        }
    }

};


int main()
{
    try
    {
        cout << "  Welcome to the skin consultant program ^_^               \n\n" << endl;
        cout << "                Presented By:                     " << endl;
        cout << "                Hajira Bibi                    " << endl;
        cout << "                Noor Bibi                     \n\n" << endl;





        cout << "   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
        cout << "   *          Here are some things to keep in mind:                    *" << endl;
        cout << "   *                                                                   *" << endl;
        cout << "   *    ~ Read the instructions carefully and give valid input         *" << endl;
        cout << "   *    ~ These are some general suggestions                           *"<< endl;
        cout << "   *    ~ In case of extreme skin conditions consult your doctor       *" << endl;
        cout << "   *    ~ Keep in mind that everyone's skin type is different          *" << endl;
        cout << "   *    ~ Press enter to go on next question                           *" << endl;
        cout << "   *                                                                   *" << endl;
        cout << "   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

        cin.get();


        system("clear");

        cout << "First of all examine your skin type by some simple steps\n" << endl;
        cout << "* If your skin always feel tight and its mostly dull and dehydrated chances are that your skin type is Dry  \n\n* Also if your skin was not like this before and after being dignosed with any medical condition it behaves like this \nthen it is Acquired Dry Skin\n" << endl;
        cout << "* If your skin is mostly shiny or you have oil on your face then it is Oily Skintype\n" << endl;
        cout << "* If there are some weird bumps or acne mostly on your skin then its Acne Prone Skin \n" << endl;
        cout << "* If there are some dark areas on your face especially around mouth or under eyes then you have hyperpigmented skin\n" << endl;
        cout << "\n\nNow you can choose your skintype" << endl;


        int userSkinType;
        int userConcern;

        cout << " Enter your skin type \n \n   0. Dry \n   1. Oily  \n   2. Acne \n   3. Hyperpigmentation \n   4. Acquired Dry skin\n ";
        cin >> userSkinType;
        cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;

        while (userSkinType < Dry || userSkinType > AcquiredDry)
        {
            cout << "Invalid skin type. Please try again.\n";
            cout << "\n Enter your skin type \n \n0 for dry \n1 for oily  \n2 for acne \n3 for hyperpigmentation \n4 for diabetes skin \n ";
            cin >> userSkinType;
        }

        system("clear");

        SkinDisease* userSkinDisease;

        int ans;
        int a1;

        switch (userSkinType)
        {
        case Dry:
            cout << "\nDo you have eczema or psorisis?  \n                                    \"Eczema is a chronic inflammatory skin condition characterized by \n                                    dry, itchy, and scaly skin, often accompanied by redness, swelling, and blistering\"  \n1. Yes      2. No "<< endl;
            cin >> ans;

            if (ans == 1)
            {
                cout << "\nIs it genetic ?   \n                                               \"Like any of your family member is also suffering from this or not \"  \n1.Yes     2. No " << endl;
                cin >> a1;
                switch (a1)
                {
                case 1:
                    cout << "\nThen you should avoid irritants as much as possible because there is no as such cure for it only cure is prevention\n " << endl;
                    break;
                case 2:
                    cout << "Then it is curable by following a proper routine " << endl;
                    break;
                default:
                    cout << "Invalid input. Please try again." << endl;
                }

                cout << "Is it active eczema ?  \n                                          \"Are you currently dealing with a flare up?\" \n1,Yes  2.No" << endl;
                cin >> ans;
                switch (ans)
                {
                case 1:
                    cout << "Use a tropical steroid and avoid irritants \nConsume prebiotics and eat healthy and healing foods" << endl;
                    break;
                case 2:
                    cout << "Make sure it's not active and let it heal first then treat it \nMaintain a proper routine for prevent it" << endl;
                    break;
                default:
                    cout << "Invalid input. Please try again." << endl;
                }

                userSkinDisease = new DrySkin();
            }
            else
            {
                cout << "\nOk if it's only dryness then you should follow some tips to maintain healthy skin barrier \n" << endl;
                userSkinDisease = new DrySkin();
            }



            break;

        case Oily:

            cout << "\nDo you have problematic area?    1. Yes      2. No "<< endl;
            cin >> ans;
            if (ans == 1)
            {
                cout << "\nIs it your T-zone ?      1.Yes  2. No " << endl;
                cin>>a1;
                if (a1 == 1 )
                {
                    cout << "\nThen you should try avoiding products that clog your pores \n " << endl;
                }
                else
                {
                    cout << "Then its a good news because you have a normal to combination skin " << endl;
                }
                userSkinDisease = new OilySkin();

            }
            else
            {
                cout << "\nOk if it's only dryness then you should follow some tips to maintain healthy skin barrier \n" << endl;
                userSkinDisease = new OilySkin();
            }

            break;


        case Acne:

            cout << "\nDo you have any active acne?    1. Yes      2. No "<< endl;
            cin >> ans;
            if (ans == 1)
            {
                cout << "\nIs it due to hormones ?      1.Yes  2. No " << endl;
                cin>>a1;
                if (a1 == 1 )
                {
                    cout << "\nThen try taking organic herbs to regulate your hormones\n " << endl;
                }
                else
                {
                    cout << "Try maintaining hygiene and avoid touching your face with dirty hands and mobile phones " << endl;
                }
                userSkinDisease = new AcneSkin();

            }
            else
            {
                cout << "\nTry getting proper treatment from any dermatologist \n" << endl;
                userSkinDisease = new AcneSkin();
            }

            break;

        case Hyperpigmentation:
            cout << "\nDo you have hyperpigmentation?    1. Yes      2. No "<< endl;
            cin >> ans;
            if (ans == 1)
            {
                cout << "\nIs hyperpigmentation genetic?      1.Yes  2. No " << endl;
                cin>>a1;
                if (a1 == 1 )
                {
                    cout << "\nThen it is important to avoid irritants and direct sun exposure as much as possible, and use a broad-spectrum sunscreen with SPF 30 or higher. \nUsing skin lightening products containing ingredients such as vitamin C, retinoids, and hydroquinone can help improve the appearance of hyperpigmentation.\n " << endl;
                }
                else
                {
                    cout << "Then it is important to maintain a consistent skincare routine and avoid picking at the skin, which can worsen hyperpigmentation. \nUsing products containing ingredients such as vitamin C, retinoids, and niacinamide can help improve the appearance of hyperpigmentation.\n" << endl;
                }
                userSkinDisease = new HyperpigmentationSkin();

            }
            else
            {
                cout << "\nThat's great! To prevent hyperpigmentation. \nIt's important to protect your skin from the sun by wearing sunscreen, protective clothing, and seeking shade. \nMaintaining a consistent skincare routine and avoiding irritants can help keep your skin healthy and even-toned.\n" << endl;
            }
            break;


        case AcquiredDry:

            cout << "\nDo you have diabetes?    1. Yes      2. No "<< endl;
            cin >> ans;
            if (ans == 1)
            {
                cout << "\nDoes diabetes affect your skin?      1.Yes  2. No " << endl;
                cin>>a1;
                if (a1 == 1 )
                {
                    cout << "\nThen it is important to manage your blood sugar levels and maintain good skin care practices. \nLook for skincare products that are gentle, fragrance-free, and moisturizing. \nAvoid hot showers and baths, and use a humidifier to prevent dry skin.\n " << endl;
                }
                else
                {
                    cout << "Although diabetes may not be currently affecting your skin, \nit is important to maintain good skin care practices and manage your blood sugar levels to prevent future skin complications.\n" << endl;
                }
                userSkinDisease = new AcquiredDrySkin();
            }
            else
            {
                cout << "\nThat's great! To maintain healthy skin, \nit's important to practice good skincare, \nincluding moisturizing, protecting from the sun, and avoiding irritants.\n" << endl;
                userSkinDisease = new AcquiredDrySkin();
            }
            break;


        default:
            cout << "Invalid skin type.";
            return 1;
        }


        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n" << endl;

        cin.get();
        cin.get();
        system("clear");

        cout << "\nDo you want a morning routine: \n0 for Yes \n1 for No\n";
        cin >> userConcern;

        while (userConcern != 0 && userConcern != 1)
        {
            cout << "Invalid concern. Please try again.\n";
            cout << "\nDo you want to know morning routine: \n0 for Yes \n1 for No\n";
            cin >> userConcern;
        }


        if (userConcern == 0)
        {
            userSkinDisease->displayDayRoutine();
        } else
        {
            cout << "Ok you can also go through some reccomendations" << endl;
        }

        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n" << endl;

        cin.get();
        cin.get();
        system("clear");

        cout << "\nDo you want a night time routine: \n0 for Yes \n1 for No\n";
        cin >> userConcern;


        while (userConcern != 0 && userConcern != 1)
        {
            cout << "Invalid concern. Please try again.\n";
            cout << "\nDo you want to know night time routine: \n0 for Yes \n1 for No\n";
            cin >> userConcern;
        }


        if (userConcern == 0)
        {
            userSkinDisease->displayNightRoutine();
        } else
        {
            cout << "Ok you can also go through some reccomendations" << endl;
        }

        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n" << endl;

        cin.get();
        cin.get();
        system("clear");

        cout << "\nDo you want to know things to avoid? \n0 for Yes \n1 for No\n";
        cin >> userConcern;


        while (userConcern != 0 && userConcern != 1)
        {
            cout << "Invalid concern. Please try again.\n";
            cout << "\nDo you want to know things to avoid: \n0 for Yes \n1 for No\n";
            cin >> userConcern;
        }


        if (userConcern == 0)
        {
            userSkinDisease->displayThingsToAvoid();
        } else
        {
            cout << "You can press Enter to go to the next question" << endl;

        }

        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n" << endl;

        cin.get();
        cin.get();
        system("clear");

        cout << "\nDo you want to know things to follow?: \n0 for Yes \n1 for No\n";
        cin >> userConcern;



        while (userConcern != 0 && userConcern != 1)
        {
            cout << "Invalid concern. Please try again.\n";
            cout << "\nDo you want to know things to follow: \n0 for Yes \n1 for No\n";
            cin >> userConcern;
        }


        if (userConcern == 0)
        {
            userSkinDisease->displayThingsToFollow();
        } else
        {
            cout << "You can press Enter to go to the next question" << endl;
        }

        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n" << endl;

        cin.get();
        cin.get();
        system("clear");


        cout << "\nDo you want to know product reccomendation? \n0 for Yes \n1 for No\n";
        cin >> userConcern;


        while (userConcern != 0 && userConcern != 1)
        {
            cout << "Invalid concern. Please try again.\n";
            cout << "\nDo you want to know product reccomendation: \n0 for Yes \n1 for No\n";
            cin >> userConcern;
        }


        if (userConcern == 0)
        {
            userSkinDisease->displayProducts();
        } else
        {
            cout << "You can press Enter to go to the next question" << endl;
        }


        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n" << endl;
        cin.get();
        cin.get();
        system("clear");

        cout << "\nDo you want ingredients reccomendation? \n0 for Yes \n1 for No\n";
        cin >> userConcern;

        while (userConcern != 0 && userConcern != 1)
        {
            cout << "Invalid concern. Please try again.\n";
            cout << "\nDo you want to know ingredient reccomendations: \n0 for Yes \n1 for No\n";
            cin >> userConcern;
        }


        if (userConcern == 0)
        {
            userSkinDisease->displayIngredients();
        } else
        {
            cout << "You can press Enter to go to the next question" << endl;
        }
        cin.get();
        cin.get();

        system("clear");
        cout << "\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n\n" << endl;

        cout << "Thank you :) for using skin consultant program.\nWe hope you had a rough mindmap of what to do  \nDo consult a doctor in case of several poblems. " << endl;

        cout << "\n\n\n<><><><><><><><><><><><><><><><><><><><><><><><><><>\n" << endl;

        delete userSkinDisease;
    }

    catch (const exception& e)
    {
        cerr << "Unexpected error: " << e.what() << endl;
        return 0;
    }



    return 0;
}
    