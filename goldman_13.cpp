/* problem link: https://practice.geeksforgeeks.org/problems/decode-the-string2444/1# */


class Solution{
public:
    string decodedString(string s){
        stack<int> integerstack;
    stack<char> stringstack;
    string temp = "", result = "";
    for (int i = 0; i < s.length(); i++)
    {
        int count = 0;
        if (s[i] >= '0' && s[i] <='9')
        {
            while (s[i] >= '0' && s[i] <= '9')
            {
                count = count * 10 + s[i] - '0';
                i++;
            }

            i--;
            integerstack.push(count);
        }

        else if (s[i] == ']')
        {
            temp = "";
            count = 0;

            if (! integerstack.empty())
            {
                count = integerstack.top();
                integerstack.pop();
            }

            while (! stringstack.empty() && stringstack.top()!='[' )
            {
                temp = stringstack.top() + temp;
                stringstack.pop();
            }

            if (! stringstack.empty() && stringstack.top() == '[')
                stringstack.pop();

            for (int j = 0; j < count; j++)
                result = result + temp;

            for (int j = 0; j < result.length(); j++)
                stringstack.push(result[j]);

            result = "";
        }

        else if (s[i] == '[')
        {
            if (s[i-1] >= '0' && s[i-1] <= '9')
                stringstack.push(s[i]);

            else
            {
                stringstack.push(s[i]);
                integerstack.push(1);
            }
        }

        else
            stringstack.push(s[i]);
    }

    while (! stringstack.empty())
    {
        result = stringstack.top() + result;
        stringstack.pop();
    }

    return result;
    }
};
