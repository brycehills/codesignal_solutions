public static String reverseParentheses(String s)
    {
        for(int i =0; i < s.length(); i++)
            if(s.contains("("))
            {
                s = parenBit(s);
                //System.out.println(s);
            }

        return s;
    }

    public static String parenBit(String str)
    {
        StringBuilder sb = new StringBuilder(str);
        char c;
        int start = 0;
        int end = 0;
        int counter = 0;

        for(int i = 0; i < sb.length(); i++)
        {
            c = str.charAt(i);
            if(c == '(')
                start = i;
            if(c == ')')
            {
                end = i;
                String sub = str.substring(start + 1, end);
                StringBuilder sb1 = new StringBuilder(sub);
                sb1.reverse();
                sb.replace(start,end+1,"");
                sb.insert(start,sb1);
                return sb.toString();
            }

        }

        return "";
    }