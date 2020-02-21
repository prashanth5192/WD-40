import java.util.HashMap;
class Solution{
	static char firstNonRepeatingCharacter(String s){
		HashMap<Character,Integer> char_map = new HashMap();
		for(int i=0;i<s.length();i++){
			char c = s.charAt(i);
			if(char_map.containsKey(c)){
				char_map.put(c,char_map.get(c)+1);
			}
			else{
				char_map.put(c,1);
			}
		}
		for(int i=0;i<s.length();i++){
				char c =s.charAt(i);
				if (char_map.get(c)==1) return c;
		}
		return '_';
	}

	public static void main(String [] args){
		Solution test = new Solution();
		System.out.println(test.firstNonRepeatingCharacter("abbccd"));
	}
}
