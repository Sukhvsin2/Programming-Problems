public int myAtoi(String s) {
        s = s.trim();//removing front & back white spaces
        int len = s.length();
        if(len == 0) return 0;
        
        long res = 0;
        int sign = s.charAt(0)=='-'?-1:1;//specify sign
        boolean start = true;
        
        int i=0;
        if(s.charAt(0)=='-' || s.charAt(0)=='+')i++;
        
        for(;i<len;i++){
            if(s.charAt(i) == '0' && start)continue;//ignore leading zeros
            if(s.charAt(i)<'0' || s.charAt(i)>'9') break;//break if we get char apart from number
            start = false;
            res *= 10;
            res += s.charAt(i)-'0';
           
            if(sign*res >= Integer.MAX_VALUE ) return Integer.MAX_VALUE;//clamping to MAX
            if(sign*res <= Integer.MIN_VALUE ) return Integer.MIN_VALUE; //clamping to MIN
        }
        
        return (int)(sign*res);
        
    }
