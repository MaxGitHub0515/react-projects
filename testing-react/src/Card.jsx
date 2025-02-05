import bbclogo from './assets/images.png'

function Card() {
    return(
        <div className="card">
            <img src={bbclogo} alt="BBC logo" />
            <h2>BBC Studio</h2>
            <p>Reporting from any place in the world!</p>
        </div>
    )
}

export default Card;