package hkxy.training.demo7.demo1;

import java.util.*;

public class DealCardsDemo {
    private final List<String> bottomCards = new ArrayList<>();//底牌组
    private final Random rm = new Random();
    private final List<String> playerA = new ArrayList<>();//玩家A
    private final List<String> playerB = new ArrayList<>();//玩家B
    private final List<String> playerC = new ArrayList<>();//玩家C
    List<String> cardList = new ArrayList<>();//随机牌组的链表

    public static void main(String[] args) {
        DealCardsDemo dealCards = new DealCardsDemo();//初始化对象
        dealCards.dealCards();
        System.out.println("玩家A的牌是：");
        showCards(dealCards.getPlayerA());
        System.out.println("玩家B的牌是：");
        showCards(dealCards.getPlayerB());
        System.out.println("玩家C的牌是：");
        showCards(dealCards.getPlayerC());
    }

    //格式化输出链表数据
    public static void showCards(List<String> list) {
        System.out.print("【");
        int count = 0;
        while (!(list.size() == 1)) {
            count++;
            System.out.print(list.removeFirst() + ",");
            if (count % 6 == 0) {
                System.out.println();
            }
        }
        System.out.println(list.removeFirst() + "】");
    }

    //发牌程序
    public void dealCards() {
        cardList = new ArrayList<>(getCardSet());
        //获取三张底牌
        while (bottomCards.size() < 3) {
            //随机从牌组中抽出一张牌（删除），并将该牌放入底牌中
            bottomCards.add(cardList.remove(rm.nextInt(cardList.size())));
        }
        //地主牌
        String landLordCard = cardList.get(rm.nextInt(cardList.size()));

        System.out.println("地主牌是：" + landLordCard);
        //循环发牌给ABC（A先摸牌）
        int cardNuber = cardList.size();
        System.out.println("派牌开始！");
        System.out.println("...");
        for (int i = 1; i <= cardNuber; i++) {
            if (i % 3 == 0) {
                playerC.add(cardList.get(i - 1));
            } else if (i % 2 == 0) {
                playerB.add(cardList.get(i - 1));
            } else {
                playerA.add(cardList.get(i - 1));
            }
        }
        System.out.println("派牌结束！");
        System.out.println("底牌是：" + bottomCards);
        if (playerA.contains(landLordCard)) {
            System.out.println("地主是玩家A");
            while (!bottomCards.isEmpty()) {
                playerA.add(bottomCards.removeFirst());
            }
        } else if (playerB.contains(landLordCard)) {
            System.out.println("地主是玩家B");
            while (!bottomCards.isEmpty()) {
                playerB.add(bottomCards.removeFirst());
            }
        } else {
            System.out.println("地主是玩家C");
            while (!bottomCards.isEmpty()) {
                playerC.add(bottomCards.removeFirst());
            }
        }
    }

    //随机牌组生成程序
    public Set<String> getCardSet() {
        Set<String> cardSet = new HashSet<>();
        Map<String, Integer> timesCounter = new HashMap<>();//牌面出现的次数
        List<String> cardColors = getCardColor();//牌面的花色
        List<String> cardValues = getCardValue();//牌面的数字

        while (!cardValues.isEmpty()) {
            String cardColor = cardColors.get(rm.nextInt(cardColors.size()));
            String cardValue = cardValues.get(rm.nextInt(cardValues.size()));
            String card = cardColor + " " + cardValue;
            if (cardSet.add(card)) {
                if (timesCounter.containsKey(cardValue)) {
                    timesCounter.put(cardValue, timesCounter.get(cardValue) + 1);
                    if (4 == timesCounter.get(cardValue)) {
                        cardValues.remove(cardValue);
                    }

                } else {
                    timesCounter.put(cardValue, 1);
                }
            }
        }
        cardSet.add("RED JOKER");
        cardSet.add("BLACK JOKER");
        return cardSet;
    }

    //获取牌组中非大小王牌的牌面值
    public List<String> getCardValue() {
        List<String> cardValues = new ArrayList<>();
        cardValues.add("Ace");
        cardValues.add("2");
        cardValues.add("3");
        cardValues.add("4");
        cardValues.add("5");
        cardValues.add("6");
        cardValues.add("7");
        cardValues.add("8");
        cardValues.add("9");
        cardValues.add("10");
        cardValues.add("Jack");
        cardValues.add("Queen");
        cardValues.add("King");
        return cardValues;
    }

    //获取牌组中的花色
    public List<String> getCardColor() {
        List<String> cardColor = new ArrayList<>();
        cardColor.add("spade");
        cardColor.add("heart");
        cardColor.add("diamond");
        cardColor.add("club");
        return cardColor;
    }

    //获取玩家的手牌的get方法
    public List<String> getPlayerA() {
        return playerA;
    }

    public List<String> getPlayerB() {
        return playerB;
    }

    public List<String> getPlayerC() {
        return playerC;
    }
}
