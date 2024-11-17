var book = {
    title : "Ikigai: The Japanese secret to a long and happy life",
    author : "Héctor García, Francesc Miralles",
    publishedYear : "2017",
    displayDetails(){
        console.log(`Title: ${this.title} \nAuthor: ${this.author} \nPublished Year: ${this.publishedYear}`);
    }
}
book.displayDetails();