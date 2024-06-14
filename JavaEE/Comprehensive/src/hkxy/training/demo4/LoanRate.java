package hkxy.training.demo4;

public class LoanRate {
    public double getInterestRate(String term, double floatScale) {
        String type = term.substring(term.length() - 1);
        int terms = Integer.parseInt(term.substring(0, (term.length() - 1)));
        double loanRate = 0.0;
        if (!"Y".equals(type)) {
            loanRate = getShortBase() * (1 + floatScale);
            System.out.println("贷款期限是" + term + "根据基准利率" + getShortBase() + "和浮动比例" + floatScale + "，计算出来的贷款利率是：" + loanRate);
        } else {
            if (5 > terms) {
                loanRate = getMidBase() * (1 + floatScale);
                System.out.println("贷款期限是" + term + "根据基准利率" + getMidBase() + "和浮动比例" + floatScale + "，计算出来的贷款利率是：" + loanRate);
            } else {
                loanRate = getLongBase() * (1 + floatScale);
                System.out.println("贷款期限是" + term + "根据基准利率" + getLongBase() + "和浮动比例" + floatScale + "，计算出来的贷款利率是：" + loanRate);
            }
        }
        return loanRate;
    }

    public double getShortBase() {
        return 4.38;
    }

    public double getMidBase() {
        return 4.75;
    }

    public double getLongBase() {
        return 5.25;
    }

    public static void main(String[] args) {
        LoanRate lr = new LoanRate();
        double lianRateShort = lr.getInterestRate("8M", 0.7);
        double lianRateMid = lr.getInterestRate("4Y", 0.7);
        double lianRateLong = lr.getInterestRate("6Y", 0.6);
    }
}
